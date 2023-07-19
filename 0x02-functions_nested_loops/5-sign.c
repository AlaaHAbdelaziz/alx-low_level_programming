#include "main.h"

/**
 * print_sign - print the sign of the number
 *
 * @n: character to be checked
 *
 * Discription: prints the sign of a number
 *
 * Return: 1 for positive num an -1 for negative and 0 otherwise
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar(43);
return (1);
}
else if (n < 0)
{
_putchar(45);
return (-1);
}
else
{
_putchar(48);
return (0);
}
}
