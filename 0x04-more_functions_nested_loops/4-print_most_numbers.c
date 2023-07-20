#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - prints numbers except 2 an 4
 * Return: Always numbers
 */
void print_most_numbers(void)
{
int i;
for (i = 0; i < 10 ; i++)
{
if (i != 2 && i != 4)
{
putchar(i + '0');
}
}
putchar('\n');
}
