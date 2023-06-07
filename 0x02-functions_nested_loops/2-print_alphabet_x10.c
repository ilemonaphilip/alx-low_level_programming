#include <stdio.h>
#include <main.h>

/**
 * c - this code prints the alphabet in lowercase
 * Return = 0
 */
int _islower(int c);
{
	char az;
	int times;

	for (times = 1; times <= 10; times++)
	{
	putchar('\n');
	for (az = 'a'; az <= 'z'; az++)
	{
	putchar(az);
	}
	}

	return (0);
}
