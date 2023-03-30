#include "main.h"
/**
 * add - Add two intergers.
 * @num1: number to be added.
 * @num2: number to be added.
 * Return: total result of num1 and num2
 */
int add(int num1, int num2)
{
	int result;

	if (num1 < 0)
	{
		num1 = -num1;
	}
	if (num2 < 0)
	{
		num2 = -num2;
	}
	result = num1 + num2;
	return (result);
}
