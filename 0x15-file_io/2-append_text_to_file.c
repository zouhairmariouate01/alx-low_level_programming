#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: name of the file.
 * @text_content: NULL terminated string to add at the end of the file.
 *
 * Return: 1 on success and -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
    int fd, n_written, len = 0;

    if (!filename)
        return (-1);

    if (text_content)
    {
        while (text_content[len])
            len++;
    }

    fd = open(filename, O_WRONLY | O_APPEND);
    if (fd == -1)
        return (-1);

    if (len)
    {
        n_written = write(fd, text_content, len);
        if (n_written == -1 || n_written != len)
        {
            close(fd);
            return (-1);
        }
    }

    close(fd);

    return (1);
}
