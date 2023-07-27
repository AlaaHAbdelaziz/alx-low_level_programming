#include "main.h"
#include <stdio.h>

/**
 * _strcat -  concatenates two strings
 * Description:  concatenates two strings.
 * @dest: string 1
 * @src: string 2
 * @n: number of bytes
 * Return: pointer
 */
char *_strncat(char *dest, char *src, int n)
{
int d, s;
for (d = 0; dest[d] != '\0' ; d++)
;
for (s = 0; src[s] != '\0' && n > 0; s++, n--, d++)
{
dest[d] = src[s];
}
dest[d] = '\0';
return (dest);
}
