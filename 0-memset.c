#include "main.h"
#include <stdio.h>

/**
 * _memset -  fills memory with a constant byte
 * Description:  fills memory with a constant byt
 * @s: pointer
 * @b: char 1
 * @n: int 1
 * Return: 0
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
