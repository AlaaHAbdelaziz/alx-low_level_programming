#include "main.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers
 *
 * @i: integer one
 * Discription: prints numbers rom 0 to 9
 *
 * Return: numbers
 */
void print_numbers(void)
{
int i;
for (i = 0; i < 10 ; i++)
{
putchar(i + '0');
putchar('\n');
}
}
