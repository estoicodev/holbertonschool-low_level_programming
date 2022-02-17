0;10;1c#include "main.h"

/**
 * reverse_array - check the code
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int len, i;
	int *p_a = a;
	int temp;

	len = 0;
	while (len < n)
	{
		p_a++;
		len++;
	}
	p_a--;

	n = len / 2;
	for (i = 0; i < n; i++)
	{
		temp = *a;
		*a = *p_a;
		*(a + len - 1) = temp;
		a++;
		p_a--;
		len -= 2;
	}
}
