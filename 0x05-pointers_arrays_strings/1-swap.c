#include "main.h"
#include <stdio.h>

/**
 * swap_int(*a, *b) - swap values of two integers a and b
 * Description: this functions swaps values for two integrs
 * @a: int 1
 * @b: int 2
 * Return: 0
 */
void swap_int(int *a, int *b)
{
int x = *a;
*a = *b;
*b = x;
}
