#include "main.h"

/**
 * jack_bauer - prints minutes of the day
 *
 * Discription: prints minute of the day, starting from 00:00 to 23:59
 *
 * Return: 00:00 to 23:59
 */
void jack_bauer(void)
{
int hour, min;
for (hour = 0; hour <= 24; hour++)
{
for (min = 0; min <= 59; min++)
{
_putchar(hour);
_putchar(min);
}
}
}
