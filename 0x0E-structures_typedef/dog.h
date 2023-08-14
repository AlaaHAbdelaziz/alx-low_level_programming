#ifndef DOG_H
#define DOG_H

/**
 * struct dog - defines a group of variables
 *
 * @name: char 1
 * @age: float 1
 * @owner: char1
 * Return: 0
 */

struct dog
{
char *name;
float age;
char *owner;
};

/**
 * dog_t - Typedef for struct dog
 */

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
