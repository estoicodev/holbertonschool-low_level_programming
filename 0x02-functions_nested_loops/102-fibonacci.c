#include <stdio.h>

/**
 * fibonacci - prints 50 fibonacci numbers
 * Return: void
 */
void fibonacci(void)
{
long int a, b, c;
int i;
a = 1;
b = 2;
printf("%lu, %lu", a, b);
for (i = 0; i < 48; i++)
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
fibonacci();
return (0);
}
