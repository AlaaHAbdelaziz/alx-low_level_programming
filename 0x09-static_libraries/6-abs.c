#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 *
 * @n: character to be checked
 *
 * Discription: computes the absolute value of an integer.
 *
 * Return: absolute value of an integer.
 */
int _abs(int n)
{
int abs_val;
if (n < 0)
{
abs_val = n * -1;
return (abs_val);
}
return (n);
}
