#include <stdio.h>
#include <string.h>

/**
 * main - main function
 * Return: 0 (Success)
 */
int main(void)
{
	int x, y, z;

	for (x = '0'; x <= '9'; x++)
	{
		for (y = '0'; y <= '9'; y++)
		{
			for (z = '0'; z <= '9'; z++)
			{
				if (x == y && x == z && y == z)
					continue;
				if (x < y && y < z)
				{
					putchar(x);
					putchar(y);
					putchar(z);
					if (x == '7' && z == '9')
						continue;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar(10);
	return (0);
}
