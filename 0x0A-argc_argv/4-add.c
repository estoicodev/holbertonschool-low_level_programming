#include "main.h"

/**
 * main - main function
 * @argc: desc
 * @argv: desc
 *
 * Return: Succeed 0
 * Otherwise, 1
 */
int main(int argc, char *argv[])
{
	int i;
        int sum;

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) > 0)
		{
			sum += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}

	if (sum > 0)
	{
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}

        return (0);
}
