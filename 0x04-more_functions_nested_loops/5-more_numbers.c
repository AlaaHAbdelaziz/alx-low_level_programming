#include "main.h"
#include <stdio.h>

/**
 * more_numbers - prints more numbers
 * Return:numbers from 0 to 9 14 times
 */
void more_numbers(void)
{
int i, j;
for (j = 0; j < 10; j++)
{
for (i = 0; i <= 14; i++)
{
(i > 9) ? putchar((i / 10) + '0') : 0;
putchar((i % 10) + '0');
}
putchar('\n');
}
}
