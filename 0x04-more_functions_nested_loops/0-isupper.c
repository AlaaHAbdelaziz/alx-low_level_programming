#include "main.h"
#include <stdio.h>

/**
 * _isupper - looks for uppercase
 *
 * @c: character to be checked
 *
 * Discription: checks if c is an uppercase
 *
 * Return: 1 if c is uppercase or 0 otherwise
 */
int _isupper(int c)
{
char a = 'A';
while (a <= 'A' && a >= 'Z')
{
c = 1;
putchar(c);
}
return (0);
}
