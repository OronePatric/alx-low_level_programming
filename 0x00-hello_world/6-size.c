#include <stdio.h>
/**
 * main - prints the sizes of data types.
 * Return: 0 (success)
 */
int main(void)
{
int a;
char b;
float c;
long int d;
long long int e;
printf("Size of a char: %lu bytes(s)\n", (unsigned long)sizeof(b));
printf("Size of a int: %lu bytes(s)\n", (unsigned long)sizeof(a));
printf("Size of a long int: %lu bytes(s)\n", (unsigned long)sizeof(d));
printf("Size of a long long int: %lu bytes(s)\n", (unsigned long)sizeof(e));
printf("Size of a float: %lu bytes(s)\n", (unsigned long)sizeof(c));
