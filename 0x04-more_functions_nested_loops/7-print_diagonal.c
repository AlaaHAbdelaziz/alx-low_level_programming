#include "main.h"
#include <stdio.h>

/**
 * print_diagonal- prints diagonal line
 * @n: number of _
 * Return: diagonal line
 */
void print_diagonal(int n)
{
int i;
for (i = 0; i < n; i++)
{
putchar(' ');
putchar('_');
}
putchar('\n');
}
