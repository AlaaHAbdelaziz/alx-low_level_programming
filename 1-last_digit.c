#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * Description: last digit task
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
		printf("Last digit of %i is %n and is greater than 5\n", n, digit);
	else if (n == 0)
		printf("Last digit of %i is %n and is 0\n", n, digit);
	else if (digit < 6)&&(digit != 0)
		printf("Last digit of %i is %n and is less than 6 and not 0\n", n, digit);
	return (0);
}
