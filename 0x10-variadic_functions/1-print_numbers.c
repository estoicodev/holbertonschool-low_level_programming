#include "variadic_functions.h"

/**
 * size_of_int_like_char - desc
 * @num: ...
 *
 * Return: int
 *
 */
int size_of_int_like_char(int num)
{
	int tmp, count = 0;

	tmp = num;

	if (tmp < 0)
		count++;

	while (tmp != 0)
	{
		tmp = tmp / 10;
		count++;
	}

	return (count);
}

/**
 * int_into_string - convert to string reversed
 * @num: ...
 *
 * Return: void
 *
 */
char *int_into_string(int num)
{
	int i, count, flag = 0;
	char *str;

	if (num == 0)
	{
		str = malloc(2 * sizeof(char));
		*str = 48;
		*(str + 1) = '\0';

		return (str);
	}

	count = size_of_int_like_char(num);

	str = malloc(count * sizeof(char) + 1);

	i = 0;
	if (num < 0)
	{
		flag = 1;
		num = num * -1;
	}

	while (num != 0)
	{
		*(str + i) = (num % 10) + '0';
		num = num / 10;
		i++;
	}
	if (flag == 1)
	{
		*(str + i) = '-';
		i++;
	}
	*(str + i) = '\0';

	return (str);
}

/**
 * rev_string - desc
 * @str: ...
 *
 * Return: void
 */
void rev_string(char *str)
{
	char *p_str = str;
	char tmp;
	int i, len, n;

	len = 0;
	while (*p_str)
	{
		len++;
		p_str++;
	}
	p_str--;

	n = len / 2;

	for (i = 0; i < n; i++)
	{
		tmp = *str;
		*str = *p_str;
		*(str + len - 1) = tmp;
		str++;
		p_str--;
		len -= 2;
	}
}

/**
 * print_numbers - desc
 * @separator: ...
 * @n: ...
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list op;
	unsigned int i, num;
	char *str;

	if (n > 0)
	{
		va_start(op, n);

		for (i = 0; i < n; i++)
		{
			num = va_arg(op, unsigned int);

			str = int_into_string(num);

			rev_string(str);

			printf("%s", str);

			if (i != n - 1 && separator != NULL)
				printf("%s", separator);
		}
	}
	printf("\n");

	va_end(op);
}
