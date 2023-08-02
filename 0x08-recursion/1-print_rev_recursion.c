#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - prints a string in reverse
 * Description: prints a string in reverse
 * @s: char
 * Return: nothing
 */
void _print_rev_recursion(char *s)
{
if (*s != '\0')
{
putchar(s + 1);
putchar(*s);
}
}
