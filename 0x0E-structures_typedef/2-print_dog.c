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
printf("Name: %s\n", d->name ? d->name : "(nil)");
printf("Age: %.6f\n", d->age);
printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
}
