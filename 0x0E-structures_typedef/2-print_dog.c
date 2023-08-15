#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - intialize function
 * @d: pointer
 * Return: Nothing
 */

void print_dog(struct dog *d)
{
if (d != NULL)
{
printf(("name: %s\n", d->name) ? d->name : "Name: (nil)\n");
printf(("Age: %f\n", d->age) ? age->age : "Age: 0");
printf(("Owner: %s\n", d->owner) ? d->owner : "Owner: (nil)\n");
}
}
