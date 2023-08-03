#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion  - returns x raised to power of y
 * Description:  returns x raised to power of y
 * @x: int 1
 * @y: int 2
 * Return: -1
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
if (y == 0)
return (1);
return (x * (_pow_recursion(x, y - 1)));
}
