#include "variadic_functions.h"

/**
 * print_all - check the code
 * @format: ...
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list op;
	f_t format_types[] = {
		{ "c", print_char },
		{ "i", print_int },
		{ "f", print_float },
		{ "s", print_char_ptr },
	};
	int i = 0;
	int j = 0;
	char *sep = "";

	va_start(op, format);

	while (format != NULL && format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == *format_types[j].format)
			{
				format_types[j].f(sep, op);
				sep = ", ";
			}
			j++;
		}
		i++;
	}

	printf("\n");

	va_end(op);
}

/**
 * print_char - desc
 * @a: ...
 * @b: ...
 *
 * Return: void
 */
void print_char(char *a, va_list b)
{
	printf("%s%c", a, va_arg(b, int));
}

/**
 * print_int - desc
 * @a: ...
 * @b: ...
 *
 * Return: void
 */
void print_int(char *a, va_list b)
{
	printf("%s%i", a, va_arg(b, int));
}

/**
 * print_float - desc
 * @a: ...
 * @b: ...
 *
 * Return: void
 */
void print_float(char *a, va_list b)
{
	printf("%s%f", a, va_arg(b, double));
}

/**
 * print_char_ptr - desc
 * @a: ...
 * @b: ...
 *
 * Return: void
 */
void print_char_ptr(char *a, va_list b)
{
	char *op = va_arg(b, char *);

	if (op == NULL)
		printf("%s(nil)", a);
	else
		printf("%s%s", a, op);
}
