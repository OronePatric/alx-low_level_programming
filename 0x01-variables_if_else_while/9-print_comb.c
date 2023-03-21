#include <stdio.h>
/**
 * main - print combinations of single digit numbers.
 * Return: 0 (success)
 */
int main(void)
{
int i = 0;
putchar(i + '0');
for (i = 1; i < 10; i++)
{
putchar(',');
putchar(i + '0');
}
putchar('\n');
return (0);
}
