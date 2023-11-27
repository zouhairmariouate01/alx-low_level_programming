#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file to read
 * @letters: number of letters it should read and print
 *
 * Return: the actual number of letters it could read and print
 * If the file can not be opened or read, return 0
 * If filename is NULL return 0
 * If write fails or does not write the expected amount of bytes, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t n, read_count = 0;
	char buffer[letters + 1];

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	while (read_count < letters)
	{
		n = read(fd, buffer, letters - read_count);
		if (n == -1)
		{
			close(fd);
			return (0);
		}

		buffer[n] = '\0';

		if (write(1, buffer, n) != n)
		{
			close(fd);
			return (0);
		}

		read_count += n;
	}

	close(fd);
	return (read_count);
}
