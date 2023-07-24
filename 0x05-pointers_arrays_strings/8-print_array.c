#include "main.h"
#include <stdio.h>

/**
 * print_array - print elements of an array
 * Description:   prints n elements of an array of integers
 * @n: int
 * @a: array to be printed
 * Return: 0
 */
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
if (i == 0)
{
printf("%d", a[i]);
}
else
{
printf(", %d", a[i]);
}
}
}
