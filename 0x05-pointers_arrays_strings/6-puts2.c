#include "main.h"
#include <stdio.h>

/**
 * puts2 - prints every other character
 * Description: prints every other character in a string
 * @str: string name
 * Return: 0
 */
void puts2(char *str)
{
void puts2(char *str)
{
int len, i;
len = 0;
while (str[len] != '\0')
{
len++;
}
for (i = 0; i < len; i += 2)
{
putchar(str[i]);
}
putchar('\n');
}
}
