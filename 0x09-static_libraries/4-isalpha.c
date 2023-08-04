#include "main.h"

/**
 * _isalpha - checks if c is a letter
 *
 * @c: character to be checked
 *
 * Discription: checks if c is a letter lowercase or uppercase
 *
 * Return: 1 if c is a letter or 0 otherwise
 */
int _isalpha(int c)
{
if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
{
return (1);
}
return (0);
}
