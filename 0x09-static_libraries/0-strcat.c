#include "main.h"
#include <stdio.h>

/**
 * *_strcat -  concatenates two strings
 * Description:   concatenates two strings.
 * @dest: string 1
 * @src: string 2
 * Return: pointer
 */
char *_strcat(char *dest, char *src)
{
int d, s;
for (d = 0; dest[d] != '\0' ; d++)
;
for (s = 0; src[s] != '\0' ; s++)
{
	dest[d] = src[s];
	d++;
}
dest[d] = '\0';
return (dest);
}
