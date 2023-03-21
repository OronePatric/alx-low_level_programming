#include <stdio.h>
/**
 * main - print the alphabet in lowercase except q and e
 * Return: 0 (success)
 */
int main(void)
{
int i;
for (i = 'a'; i <= 'z'; i++)
{
if (i != 'q' || i != 'e')
{
putchar(i);
}
}
putchar('\n');
return (0);
}
