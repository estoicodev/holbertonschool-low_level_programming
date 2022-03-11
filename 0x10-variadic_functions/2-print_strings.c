#include "variadic_functions.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
        va_list op;
        unsigned int i;
        char *str;

        if (separator != NULL)
        {
                va_start(op, n);

                for (i = 0; i < n; i++)
                {
                        str = va_arg(op, char *);

			if (str == NULL)
			{
				printf("(nil)");
			}
			else
			{
				printf("%s", str);
			}

                        if (i != n - 1)
                                printf("%s", separator);
                }
        }
        printf("\n");

        va_end(op);
}
