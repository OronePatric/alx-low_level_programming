#include <stdio.h>
/**
 * main - print combination of 2 digits.
 * Return: 0 (success)
 */
int main(void)
{
int a = 0, b = 1;
while ((a <= 8) || (b <= 9))
{
putchar(a + '0');
putchar(b + '0');
if (b != 9)
{
++b;
}
else
{
++a;
b = a + 1;
}
if ((a <= 8) && (b <= 9))
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
