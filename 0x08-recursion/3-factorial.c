#include "main.h"
#include <stdio.h>

/**
 * factorial - returns the factorial of a given number
 * Description: returns the factorial of a given number
 * @n: int 1
 * Return: factorial n
 */
int factorial(int n)
{
if (n < 0)
return (-1);
else if (n == 0)
return (1);
return (n * factorial(n - 1));
}
