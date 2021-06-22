#ifndef _HOLBERTON_H
#define _HOLBERTON_H

/**
 * print_alphabet - prints the alphabet
 *
 * Return: Returns 0 Success
 */
void print_alphabet(void)
{
char a;
for (a = 'a'; a <= 'z'; a++)
putchar(a);
putchar('\n');
}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);

#endif
