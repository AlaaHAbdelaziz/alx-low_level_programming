#include "function_pointers.h"

/**
 * print_name - prints name
 * @name: pointer
 * @f: pointer function
 * Return (0);
 */

void print_name(char *name, void (*f)(char *))
{
f(name);
}
