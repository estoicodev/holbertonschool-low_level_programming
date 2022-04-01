#include "main.h"

/**
 * _strlen - desc
 * @s: ...
 *
 * Return: ...
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; *s != '\0'; i++)
		s++;

	return (i);
}

/**
 * append_text_to_file - desc
 * @filename: ...
 * @text_content: ...
 *
 * Return: ...
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (1);

	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
		return (-1);

	write(fd, text_content, _strlen(text_content));

	close(fd);

	return (1);
}
