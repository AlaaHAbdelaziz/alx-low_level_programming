#include "main.h"

/**
 * _islower - checks if the letter is lowercase
 *
 * @c character to be checked
 *
 * description: if lowercase or uppercase
 *
 * return: 1 for lowercase and 0 for otherwise
 */
int _islower(int c)
{
if (c >= 97 && c >= 122)
{
return (1);
}
return (0);
}
