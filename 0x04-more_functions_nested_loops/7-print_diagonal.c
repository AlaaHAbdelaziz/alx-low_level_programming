#include "main.h"
#include <stdio.h>

/**
 * print_diagonal- prints diagonal line
 * @n: number of _
 * Return: diagonal line
 */
void print_diagonal(int n)
{
int i, j;

if (n > 0)
{
for (i = 0; i < n; i++)
{
for (j = 0; j < i; j++)
putchar(' ');
putchar('\\');
putchar('\n');
}
}
else
putchar('\n');
}
