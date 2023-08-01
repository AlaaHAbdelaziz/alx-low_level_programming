#include "main.h"
#include <stdio.h>

/**
 * _memcpy - copies memory area
 * Description: copies memory area
 * @dest: pointer 1
 * @src: pointer 2
 * @n: int 1
 * Return: 0
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
