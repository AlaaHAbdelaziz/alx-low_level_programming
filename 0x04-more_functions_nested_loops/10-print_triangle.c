#include "main.h"
#include <stdio.h>

/**
 * print_triangle - prints triangle
 * @size: size of triangle
 * Return: 0
 */
void print_triangle(int size)
{
int i, j, k;

for (i = 1; i <= size; i++)
{
for (j = 1; j <= size - i; j++)
putchar(' ');
for (k = 1; k <= i; k++)
putchar('#');
putchar('\n');
}
(size <= 0) ? putchar('\n') : 0;
}
