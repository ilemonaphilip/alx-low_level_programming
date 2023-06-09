#include "main.h"
/**
 * _strlen_recursion - Returns the number of the string.
 * @s: The string we want to  measure.
 *
 * Return: The number of the requested string.
 */
int _strlen_recursion(char *s)
{
	int longit = 0;

	if (*s)
	{
		longit++;
		longit += _strlen_recursion(s + 1);
	}
	return (longit);
}
