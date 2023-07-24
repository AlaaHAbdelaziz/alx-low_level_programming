#include "main.h"
#include <stdio.h>

/**
 * swap_int - swap values of two integers a and b
 * Description: this functions swaps values for two integrs
 * @a: pointer 1
 * @b: pointer 2
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
int x = *a;
*a = *b;
*b = x;
}
