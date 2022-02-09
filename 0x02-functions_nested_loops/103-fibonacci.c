#include <stdio.h>

/**
 * fibonacci_even_terms - prints the prints the sum of the even-valued
 * terms that not exceed 4,000,000
 * Return: void
 */
void fibonacci_even_terms(void)
{
int a, b, c;
long int sum;
a = 1;
b = 2;
sum = 0 + b;
while (c < 4000000)
{
c = a + b;
if (c % 2 == 0)
{
sum += c;
}
a = b;
b = c;
}
printf("%lu\n", sum);
}

/**
 * main - main function
 * Return: 0 (Success)
 */
int main(void)
{
fibonacci_even_terms();
return (0);
}
