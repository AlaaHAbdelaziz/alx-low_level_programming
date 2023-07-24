#include "main.h"
#include <stdio.h>

/**
 * *_strcpy - copies the string
 * Description: copies the string
 * @dest: char 1
 * @src: char2
 * Return: 0
 */
char *_strcpy(char *dest, char *src)
{
int len, i;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
