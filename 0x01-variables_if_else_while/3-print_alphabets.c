#include <stdio.h>
/**
 * main - print the alphabet in lowercase and uppercase
 * Return: 0 (success)
 */
int main(void)
{
int i, num;
for (i = 'a'; i < = 'z'; i++)
{
putchar(i);
}
for (num = 'A'; num < = 'Z'; num++)
{
putchar(num);
}
putchar('\n');
return (0);
}
