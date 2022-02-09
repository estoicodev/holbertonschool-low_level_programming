#include <stdio.h>

/**
 * natural - Prints the sum of all multiples of 3 and 5 below 1024  
 * Return: void
 */
void natural(void)
{
int i;
int sum;
sum = 0;
for (i = 0; i < 1024; i++)
{
if (i % 3 == 0)
{
sum += i;
}
else if (i % 5 == 0)
{
sum += i;
}
}
printf("%d\n", sum);
}

/**
 * main - main function
 * Return: 0 (Success)
 */
int main(void)
{
natural();
return (0);
}
