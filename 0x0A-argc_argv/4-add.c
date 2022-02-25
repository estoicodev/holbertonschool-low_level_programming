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
	int num;
	char *remaining;

	sum = 0;
	count = 0;
	flag = 0;

	for (i = 1; i < argc; i++)
	{
		num = (int)strtol(argv[i], &remaining, 10);
		if (*remaining == '\0')
		{
			count++;
			if (num > 0)
				sum += num;
		}
		else if (count > 0)
		{
			flag = 1;
			break;
		}
	}

	if (count > 0 && flag == 0)
	{
		printf("%d\n", sum);
	}
	else if (count == 0)
	{
		printf("0\n");
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
