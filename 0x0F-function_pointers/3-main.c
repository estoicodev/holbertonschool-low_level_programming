#include "3-calc.h"

/**
 * main - main function
 * @argc: ...
 * @argv: ...
 *
 * Return: 0 (Success)
 */
int main(int argc, char* argv[])
{
        char *arr[5] = {"+", "-", "*", "/", "%"};
	int (*pf)(int a, int b);
        int res;

        if (argc != 4)
        {
                printf("Error\n");
                exit(98);
        }

	pf = get_op_func(argv[2]);

	if (!pf)
	{
		printf("Error\n");
		exit(99);
	}

	res = (*pf)(atoi(argv[1]), atoi(argv[3]));

	if ((*argv[2] == *arr[3] || *argv[2] == *arr[4]) && res == -1)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", res);
        return (0);
}

/**
int main(int argc, char* argv[])
{
	char *arr[5] = {"+", "-", "*", "/", "%"};
	int res, j;

	if (argc == 4)
	{
		printf("%s\n", argv[0]);
		printf("%s\n", argv[1]);
		printf("%s\n", argv[2]);
		printf("%s\n", argv[3]);
		printf("----\n");

		if (*argv[2] == *arr[2])
		{
			res = atoi(argv[1]) * atoi(argv[3]);
			printf("%s * %s = %d\n", argv[1], argv[3], res);
		}
		else if (*argv[2] == *arr[3])
		{
			res = atoi(argv[1]) / atoi(argv[3]);
			printf("%s / %s = %d\n", argv[1], argv[3], res);
		}
		else if (*argv[2] == *arr[4])
		{
			res = atoi(argv[1]) % atoi(argv[3]);
			printf("%s mod %s = %d\n", argv[1], argv[3], res);
		}
	}

	return (0);
}
*/
