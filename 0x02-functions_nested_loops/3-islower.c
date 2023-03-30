#include "main.h"
/**
 * _islower - checks if a letter is lower case
 * @c: The character to print
 * Return 1 if c is lowercase otherwise 0
 */
void _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
