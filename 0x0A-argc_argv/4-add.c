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
	int count;
	int flag;

	sum = 0;
	count = 0;
	flag = 0;
	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) != 0)
		{
			count++;
			if (atoi(argv[i]) > 0)
				sum += atoi(argv[i]);
		}
		else
			flag = 1;
	}

	if (count > 0 && flag == 0)
	{
		printf("%d\n", sum);
	}
	else if (flag == 1)
	{
		printf("Error\n");
		return (1);
	}
	else
		printf("0\n");

	return (0);
}
