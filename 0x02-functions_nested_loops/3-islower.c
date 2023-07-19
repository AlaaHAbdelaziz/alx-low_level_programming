#include "main.h"

/**
 * _islower - checks if the letter is lowercase
 *
 * description: if lowercase or uppercase
 *
 * return: 1 for lowercase and 0 for otherwise
 */
int _islower(int c)
{
if (c >= 'a' && c >= 'z')
{
return (1);
}
return (0);
}
