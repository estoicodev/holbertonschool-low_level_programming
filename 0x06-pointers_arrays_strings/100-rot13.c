#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @c: String
 * Return: String encoded
 */
char *rot13(char *c)
{
int i;
int in_1 = 65;
int end_1 = 90;
int in_2 = 97;
int end_2 = 122;
char *ptr = c;

for (i = 0; *(c + i); i++)
{
while ((*ptr >= in_1 && *ptr <= end_1) || (*ptr >= in_2 && *ptr <= end_2))
{
if (*ptr < in_1 + 13 || (*ptr >= in_2 && *ptr < in_2 + 13))
{
*(c + i) = *(c + i) + 13;
break;
}
*(c + i) = *(c + i) - 13;
break;
}
ptr++;
}

return (c);
}
