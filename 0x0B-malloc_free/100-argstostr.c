#include "main.h"

/**
 * _strlen - desc
 * @s: desc
 *
 * Return: Pointer to the string duplicated
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		s++;
		i++;
	}

	return (i);
}

/**
 * _strcat - desc
 * @dest: desc
 * @src: desc
 *
 * Return: Pointer to the string duplicated
 */
char *_strcat(char *dest, char *src)
{
	int len;
	int i;

	len = 0;

	while (*dest)
	{
		dest++;
		len++;
	}

	for (i = 0; *(src + i); i++)
	{
		*dest = *(src + i);
		dest++;
		len++;
	}

	*dest = '\0';

	while (len > 0)
	{
		dest--;
		len--;
	}

	return (dest);
}

/**
 * argstostr - desc
 * @ac: desc
 * @av: desc
 *
 * Return: Pointer to the string duplicated
 */
char *argstostr(int ac, char **av)
{
	int size_av, i, total = 0;
	char *new_str;
	char delim[] = "\n";

	if (ac == 0 || av == NULL)
		return (NULL);

	for (size_av = 0; *(av + size_av); size_av++)
		total += _strlen(*(av + size_av));

	total += (_strlen(delim) * size_av);
	new_str = malloc((total + 1) * sizeof(char));
	if (new_str == NULL)
		return (NULL);

	for (i = 0; i < size_av; i++)
	{
		_strcat(new_str, *(av + i));
		_strcat(new_str, delim);
	}

	return (new_str);
}
