#include <stdio.h>

/**
 * write - Optional function to print in console
 * Return: null
 */
int write(int filedes, const char *buf, unsigned int nbyte);
/**
 * main - main function
 * Return: 1 (Success)
 */
int main(void)
{
write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
return (1);
}
