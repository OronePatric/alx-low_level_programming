#include "main.h"
/**
 * print_sign - print the sign of the number
 * @n: integer to check
 * Return: 1 if n is greater than zero 0 and -1 otherwise.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(0 + '0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
