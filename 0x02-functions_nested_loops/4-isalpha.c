#include "main.h"
/**
 * _isalpha - checks if a letter is lower case or uppercase
 * @c: The character to print
 * Return: 1 if c is lowercase or uppercase 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}
