#include "holberton"

/**
 * print_numbers - prints numbers 0-9
 * void: Takes nothing
 *
 * Return: Returns nothing.
 */
void print_numbers(void)
{
char i;
for (i = '0'; i <= '9'; i++)
putchar(i);
putchar('\n');
}
