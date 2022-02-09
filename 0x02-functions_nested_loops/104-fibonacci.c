#include <stdio.h>

/**
 * fibonacci_98 - prints 98 fibonacci numbers
 * Return: void
 */
void fibonacci_98(void)
{
unsigned long long a, b, c;
int i;
a = 1;
b = 2;
printf("%llu, %llu", a, b);
for (i = 0; i < 96; i++)
{
c = a + b;
a = b;
b = c;
printf(", %llu", c);
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
