#include "holberton.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9
 * @void: Takes nothing
 *
 * Return: Returns nothing
 */
void print_most_numbers(void)
{
char i;
for (i = '0'; i <= '9'; i++)
{
if (i == '2' || i == '4')
continue;
putchar(i);
}
putchar('\n');
}
