#include <stdio.h>
#include <string.h>

/**
 * main - main function
 * Return: 0 (Success)
 */
int main(void)
{
	int a = '0', b = '0', x, y;

	while (a <= '9' && b <= '9')
	{
		for (x = '0'; x <= '9'; x++)
		{
			for (y = '0'; y <= '9'; y++)
			{
				if (x >= a && y > b || x > a && y == '0')
				{
					putchar(a);
					putchar(b);
					putchar(' ');
					putchar(x);
					putchar(y);
					if (a == '9' && b == '8')
						continue;
					putchar(',');
					putchar(' ');
				}
			}
		}
		b++;
		if (b == '9' && a != '9')
		{
			a++;
			b = '0';
		}
	}
	putchar(10);
	return (0);
}
