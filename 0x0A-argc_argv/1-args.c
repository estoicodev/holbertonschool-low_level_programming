#include "main.h"

/**
 * main - main function
 * @argc: desc
 * @argv: desc
 *
 * Return: Succeed 1
 * Otherwise, 0.
 */
int main(int argc, char *argv[])
{
	if (argv[0])
		printf("%d\n", argc - 1);

	return (0);
}
