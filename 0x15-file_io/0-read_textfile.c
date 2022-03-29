#include "main.h"

/**
 * read_textfile - desc
 * @filename: ...
 * @letters: ...
 *
 * Return: ...
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, file_len, write_len;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	file_len = read(fd, buffer, letters);
	if (file_len == -1)
		return (0);

	write_len = write(STDOUT_FILENO, buffer, file_len);

	if (write_len != file_len)
		return (0);

	close(fd);
	free(buffer);

	return (file_len);
}
