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
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
