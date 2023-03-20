#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - prints if number > 5 or number < 6 but not zero and zero
 * Return: 0 (success)
 */
int main(void)
{
int n, lastDigit;
srand(time(0));
n = rand() - RAND_MAX / 2;
lastDigit = n % 10;
if (lastDigit > 5 && n > 0)
{
printf("Last Digit of %d is %d and is greater than 5\n", n, lastDigit);
}
else if (lastDigit == 0)
{
printf("Last Digit of %d is %d  and is zero\n", n, lastDigit);
}
else if (lastDigit > 0 && lastDigit < 6)
{
printf("Last Digit of %d is %d and is less than 6 but not 0 ", n, lastDigit);
}
return (0);
}
