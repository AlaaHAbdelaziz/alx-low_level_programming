#include "main.h"
#include <stdio.h>

/**
 * _strncpy - copies a string
 * Description:  copies a string
 * @dest: string 1
 * @src: string 2
 * @n : int 1
 * Return: 0
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[i] = src[i];
}
for ( ; n > i; i++)
{
dest[i] = '\0';
}
return (dest);
}
