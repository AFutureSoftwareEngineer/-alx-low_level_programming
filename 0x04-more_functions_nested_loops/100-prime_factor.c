#include <stdio.h>
#include "main.h"
#include <math.h>

/**
* main - finds and prints the largest prime factor.
*        of the number 612852475143.
*
*Return: Always 0.
*/

int main(void)
{
long int num = 612852475143;
long int factor = 2;

while (factor <= sqrt(num))
{
if (num % factor == 0)
{
num /= factor;
}
else
{
factor++;
}
}
printf("%ld\n", num);
return (0);
}
