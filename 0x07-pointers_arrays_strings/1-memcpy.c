#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _memcpy - desc
 * @dest: desc
 * @src: desc
 * @n: desc
 *
 * Return: desc
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
    unsigned int i;

    for (i = 0; i < n; i++)
    {
        *(dest + i) = *src;
        src++;
    }

    return (dest);
}
