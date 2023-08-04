#include "main.h"
#include <stdio.h>

/**
 * _strlen - calculate the length
 * Description: calculate the length of a string
 * @s: string pointer
 * Return: length
 */
int _strlen(char *s)
{
int i = 0;
while (s[i] != '\0')
i++;
return (i);
}
