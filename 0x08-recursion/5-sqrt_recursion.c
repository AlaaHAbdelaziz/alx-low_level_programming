#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - returns the natural square root of a number
 * Description:  returns the natural square root of a number
 * @n: int 1
 * Return: 0
 */
int _sqrt_recursion(int n)
{
if (n == 0)
{
return (0);
}
return (helper(n, 1));
}
