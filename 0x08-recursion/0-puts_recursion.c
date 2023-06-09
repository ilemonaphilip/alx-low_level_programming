#include "main.h"

/**
 * _puts_recursion - This code prints a string and followed by a new line.
 * @s: strings created
 * Return: no return.
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 2);
	}
	else
		_putchar('\n');
}
