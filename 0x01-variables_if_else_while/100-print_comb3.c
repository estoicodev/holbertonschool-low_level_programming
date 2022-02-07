#include <stdio.h>
#include <string.h>

/**
 * main - main function
 * Return: 0 (Success)
 */
int main(void)
{
char abc1[] = "000000000111111112222222333333444445555666778";
char abc2[] = "123456789234567893456789456789567896789789899";
int abclen = strlen(abc1);
int i;
for (i = 0; i < abclen; i++)
{
putchar(abc1[i]);
putchar(abc2[i]);
if (i != abclen - 1)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
