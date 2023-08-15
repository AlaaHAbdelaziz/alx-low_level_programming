#include "dog.h"
#include <stdio.h>

/**
 * print_dog - intialize function
 * @d: pointer
 * @name: char 1
 * @age: float 1
 * @owner: char 2
 */

void print_dog(struct dog *d)
{
if (d != NULL)
{
printf("name: %s\n", d->name ? d->name : "(nil)");
printf("age: %f\n", d->age ? d->age : "(nill)");
printf("owner: %s\n", d->owner ? d->owner : "(nil)");
}
}
