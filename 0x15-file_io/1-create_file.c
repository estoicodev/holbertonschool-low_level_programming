#include "main.h"

/**
 * create_file - desc
 * @filename: ...
 * @text_content: ...
 *
 * Return: ...
 */
int create_file(const char *filename, char *text_content)
{
	int fd, text_len, file_len;
	char *content;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		return (1);

	text_len = _strlen(text_content);

	content = malloc(sizeof(char) * text_len);
	if (content == NULL)
		return (-1);

	file_len = write(STDOUT_FILENO, content, text_len);

	if (file_len != text_len)
		return (-1);

	close(fd);

	return (1);
}

/**
 * _strlen - desc
 * @s: ...
 *
 * Return: ...
 */
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i))
		i++;

	return (i);
}
