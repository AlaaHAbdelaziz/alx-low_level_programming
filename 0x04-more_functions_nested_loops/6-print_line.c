#include "main.h"
#include <stdio.h>

/**
 * print_line - prints straight line
 * @n: number of _
 * Return: straight line
 */
void print_line(int n)
{
int i;
for (i = 0; i < n; i++)
{
putchar('_');
}
putchar('\n');
}
