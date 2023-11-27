#include "main.h"

/**
 * create_file - creates a file.
 * @filename: name of the file to create.
 * @text_content: NULL terminated string to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
    int fd, n_written, len = 0;

    if (!filename)
        return (-1);

    if (text_content)
    {
        while (text_content[len])
            len++;
    }

    fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
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
