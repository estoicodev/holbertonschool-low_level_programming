#include <stdio.h>
#include <string.h>

/**
 * main - main function
 * Return: 0 (Success)
 */
int main(void)
{
char abc[] = "abcdefghijklmnopqrstuvwxyz";
int abclen = strlen(abc);
for (int i = 0; i < abclen; i++)
{
putchar(abc[i]);
}
putchar('\n');
return (0);
}
