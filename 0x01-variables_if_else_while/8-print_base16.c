#include <stdio.h>
/**
 * main - print all numbers of base 16
 * Return: 0 (success)
 */
int main(void)
{
int i, num;
for (i = 0; i < 10; i++)
{
putchar(i + '0');
}
for (num = 'a'; num <= 'f'; num++)
{
putchar(num);
}
putchar('\n');
return (0);
}
