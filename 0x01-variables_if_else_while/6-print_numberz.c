#include <stdio.h>
/**
 * main - print base 10 numerals using putchar
 * Return: 0 (success)
 */
int main(void)
{
int i;
for (i = 0; i < 10; i++)
{
putchar(i + '0');
}
putchar('\n');
return (0);
}
