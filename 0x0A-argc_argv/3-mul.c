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
	int mul;

	if (argc == 3)
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
