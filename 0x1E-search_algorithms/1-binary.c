#include "search_algos.h"

/**
 * binary_search - Entry point
 * @array: ...
 * @size: ...
 * @value: ...
 * Return: Always EXIT_SUCCESS
 */
int binary_search(int *array, size_t size, int value)
{
    int i = 0;
    int low = 0;
    int high = (int)size - 1;
    int mid = (low + high) / 2;

    if (array == NULL)
        return (-1);

    while (low <= high)
    {
        printf("Searching in array:");
        for (i = low; i <= high; i++)
            printf(", %d", array[i]);
        printf("\n");

        if (array[mid] == value)
            return (mid);
        else if (array[mid] < value)
            low = mid + 1;
        else
            high = mid - 1;
        mid = (low + high) / 2;

        if (low > high)
            break;
    }

    return (-1);
}
