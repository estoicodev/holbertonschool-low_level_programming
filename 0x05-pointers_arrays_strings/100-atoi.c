#include "main.h"

/**
 * _atoi - Convert a string to an integer.
 * @s: String to convert
 *
 * Return: string converted into integer
 */
int _atoi(char *s)
{
	int i, minus, res, flag;

	res = 0;
	flag = 0;
	minus = -1;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) == '-')
			minus *= -1;

		if (*(s + i) >= 48 && *(s + i) < 58)
		{
			res *= 10;
			res -= (*(s + i) - '0');
			flag = 1;
		}
		else if (flag == 1)
			break;
	}
	res *= minus;

	return (res);
}
