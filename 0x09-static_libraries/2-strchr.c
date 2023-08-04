#include "main.h"
#include <stdio.h>

/**
 * _strchr - locates a character in a string
 * Description: locates a character in a string
 * @s: pointer
 * @c: char 1
 * Return:  pointer to first c in the string s, or NULL if not found
 */
char *_strchr(char *s, char c)
{
while (*s)
{
if (*s != c)
{
s++;
}
else
return (s);
}
if (c == '\0')
{
return (s);
}
return (NULL);
}
