#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - main function
 * Return: 0 (Success)
 */
int main(void)
{
int n;
int lastDigit;
char third[28];
char third1[] = "is greater than 5";
char third2[] = "is 0";
char third3[] = "is less than 6 and not 0";
srand(time(0));
n = rand() - RAND_MAX / 2;
lastDigit = n % 10;
if (lastDigit > 5)
{
strcpy(third, third1);
printf("Last digit of %d is %d and %s\n", n, lastDigit, third);
}
else if (lastDigit == 0)
{
strcpy(third, third2);
printf("Last digit of %d is %d and %s\n", n, lastDigit, third);
}
else if (lastDigit < 6 && lastDigit != 0)
{
strcpy(third, third3);
printf("Last digit of %d is %d and %s\n", n, lastDigit, third);
}
return (0);
}
