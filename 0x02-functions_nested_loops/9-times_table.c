#include "main.h"

/**
 * times_table - 9 times table
 *
 * @n: character to be checked
 *
 * Discription: prints 9 times table
 *
 * Return: 9 times table, starting with 0
 */
void times_table(void)
{
int n, i, cal;
i = 9;
for (n = 0; n <= 9; n++)
{
cal = n * i;
_putchar(cal);
}
}
