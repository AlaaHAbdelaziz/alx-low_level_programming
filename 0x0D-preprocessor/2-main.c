#include <stdio.h>

/*
 * main - prints file name
 *
 * return: 0
 */

int main(void)
{
char *filename = __FILE__;
int i;
for (i = 0 ; filename[i] != '\0' ; i++)
{
putchar(filename[i]);
}
putchar('\n');
return (0);
}
