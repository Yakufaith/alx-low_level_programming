#include "holberton.h"

/**
 * _puts - prints a string, followed by a new line.
 * @str: string to append new line to.
 * Return: returns nothing.
 */
void _puts(char *str)
{
	int i;

	i = -1;
	do {
		i++;
		_putchar(str[i]);
		if (str[i] == '\0')
			_putchar('\n');
	} while (str[i] != '\0');
}
