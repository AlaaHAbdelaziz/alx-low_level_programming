#include <stdio.h>

/**
 * main - entry point
 *
 * Discription: alphabet task
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int num;
for (num = '0'; num <= '9'; num++)
{
putchar(num);
if (num == 9)
continue;
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
