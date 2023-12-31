#include "main.h"
#include <stdio.h>

/**
 * _strstr -  locates a substring
 * Description:  locates a substring
 * @haystack: char 1
 * @needle: char 2
 * Return: 0
 */
char *_strstr(char *haystack, char *needle)
{
int i;
int s = 0;
while (needle[s] != '\0')
s++;
while (*haystack)
{
for (i = 0; needle[i]; i++)
{
if (haystack[i] != needle[i])
break;
}
if (i != s)
haystack++;
else
return (haystack);
}
return (NULL);
}
