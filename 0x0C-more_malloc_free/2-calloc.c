#include "main.h"
#include <stdlib.h>

/**
 * *_calloc - allocates memory for an array, using malloc
 * Description: allocates memory for an array, using malloc
 * @nmemb unsigned int 1
 * @size: unsigned int 2
 * Return: 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *p;
unsigned int i;
if (nmemb == 0 || size == 0)
return (NULL);
p = malloc(nmemb * size);
if (p == NULL)
return (NULL);
for (i = 0; i < (nmemb * size); i++)
p[i] = 0;
return (p);
}
