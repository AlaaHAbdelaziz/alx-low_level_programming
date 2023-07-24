#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints in reverse
 * Description:  prints a string in reverse followed by a new line
 * @s: string to be printed
 * Return: string in reverse
 */
void print_rev(char *s)
{
int i, len, j;
i = 0;
while  (s[i] != '\0')
{
i++;
}
len = i;
for (j = len - 1; j >= 0; j--)
{
putchar(s[j]);
}
putchar('\n');
}
