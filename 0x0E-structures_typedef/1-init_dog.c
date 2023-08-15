#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - intialize function
 * @d: pointer
 * @name: char 1
 * @age: float 1
 * @owner: char 2
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
d = malloc(sizeof(struct dog));
d->name = name;
d->age = age;
d->owner = owner;
}
