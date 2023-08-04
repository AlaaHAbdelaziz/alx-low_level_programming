#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a string
 * Description: prints a string followed by a new line
 * @str: string
 * Return: Nothing
 */
void _puts(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
{
putchar(str[i]);
}
putchar('\n');
}
