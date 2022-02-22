#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - desc
 * @a: desc
 * @size: desc
 * Return: desc
 */
void print_diagsums(int *a, int size)
{
        int i, j, len;
        int count_one, count_two;
        int sum_one, sum_two;

        len = size * size;
        count_one = 0;
        count_two = size - 1;
        sum_one = 0;
        sum_two = 0;

        for (i = 0; i < len; i++)
        {
		if (i == count_one)
		{
			sum_one += *(a + i);
			count_one += size + 1;
		}
        }
        for (j = 0; j < len; j++)
        {
		if (j == count_two && j != len - 1)
		{
			sum_two += *(a + j);
			count_two += size - 1;
		}
        }
        printf("%d, %d\n", sum_one, sum_two);
}
