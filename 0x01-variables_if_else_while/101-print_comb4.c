#include <stdio.h>
/**
 * main - print different combinations of 3 digits.
 * Return: 0 (success)
 */
int main(void)
{
int a = 0, b = 1, c = 2;
while ((a <= 7) || (b <= 8) || (c <= 9))
{
putchar(a + '0');
putchar(b + '0');
putchar(c + '0');
if (c != 9)
{
++c;
}
else
{
if (b != 8)
{
++b;
c = b + 1;
}
else
{
++a;
b = a + 1;
c = b + 1;
}
}
if ((a <= 7) && (b <= 8) && (c <= 9))
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
