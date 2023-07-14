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
char lett;

for (lett = 'z'; lett >= 'a'; lett--)
putchar(lett);
putchar('\n');
return (0);
}
