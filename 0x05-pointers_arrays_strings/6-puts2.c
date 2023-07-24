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
int i;
i = 0;
while (str[i] != '\0')
{
i++;
}
if (str[i] % 2 == 0)
{
putchar(s[i]);
}
i++;
putchar('\n');
}
