#include <stdio.h>

/**
 * fibonacci_98 - prints 98 fibonacci numbers
 * Return: void
 */
void fibonacci_98(void)
{
unsigned long a, b, c;
int i;
a = 1;
b = 2;
printf("%lu, %lu", a, b);
for (i = 0; i < 96; i++)
{
c = a + b;
a = b;
b = c;
printf(", %lu", c);
}
printf("\n");
}

/**
 * main - main function
 * Return: 0 (Success)
 */
int main(void)
{
fibonacci_98();
return (0);
}
