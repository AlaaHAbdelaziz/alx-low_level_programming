#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverse a string
 * Description: reverse a string
 * @s: string name
 * Return: 0
 */
void rev_string(char *s)
{
int len, i, j;
len = 0;
while (s[len] != '\0')
{
len++;
}
for (i = 0, j = len - 1; i < j ; i++, j--)
{
char tmp;
tmp = s[i];
s[i] = s[j];
s[j] = tmp;
}
putchar('\n');
}
