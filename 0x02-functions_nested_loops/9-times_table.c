#include "holberton.h"
#include <stdio.h>
/**
 * times_table - computes absolute value of a number
 * @void : is the number to be determined.
 *
 * Return: returns abs value
 */

void times_table(void)
{
int i, j;
for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; j++)
{
int answer = i * j;
printf("%d", answer);
if (j < 9)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
