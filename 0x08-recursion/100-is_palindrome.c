#include "main.h"

/**
 * to_end_of_string - Go to the last character of a string
 * @s: String
 *
 * Return: address of the last character
 */
char *to_end_of_string(char *s)
{
	if (*s != '\0')
	{
		s++;
		return (to_end_of_string(s));
	}

	return (s - 1);
}

/**
 * check_palindrome - Analize if a string is palindrome
 * @start: First character
 * @end: Last character
 *
 * Return: If is palindrome (1)
 * Otherwise, 0
 */
int check_palindrome(char *start, char *end)
{
	if (start >= end)
		return (1);

	if (*start == *end)
		return (check_palindrome(start + 1, end - 1));

	return (0);
}

/**
 * is_palindrome - Analize if a string is palindrome
 * @s: String
 *
 * Return: If is palindrome (1)
 * Otherwise, 0
 */
int is_palindrome(char *s)
{
	char *end = to_end_of_string(s);

	return (check_palindrome(s, end));
}
