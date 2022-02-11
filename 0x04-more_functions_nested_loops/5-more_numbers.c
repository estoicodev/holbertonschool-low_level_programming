#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 * Return: void
 */
void more_numbers(void)
{
	int a;
	int b;
	int i;
	int j;
	i = 49;
	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 2; b++)
		{
			for (j = 48; j < 58; j++)
			{
				if (b == 1 && j == 53)
				{
					break;
				}
				if (b == 1)
				{
					_putchar(i);
				}
				_putchar(j);
			}
		}
		_putchar('\n');
	}
}
