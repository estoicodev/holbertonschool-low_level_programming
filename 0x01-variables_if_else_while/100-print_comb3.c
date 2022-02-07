#include <stdio.h>
#include <string.h>

/**
 * main - main function
 * Return: 0 (Success)
 */
int main(void)
{
int i;
int a;
int b;
int c;
int h;
int contadoPrimerDigito;
a = 48;
c = 1;
contadoPrimerDigito = 1;
b = 49;
h = 49;
for (i = 0; i < 45; i++)
{
putchar(a);
c++;
if (c > 9)
{
contadoPrimerDigito++;
c = contadoPrimerDigito;
a++;
}
putchar(b);
b++;
if (b == 58)
{
h++;
b = h;
}
if (i != 44)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
