#include "main.h"
#include <stdio.h>

/**
* print_number - finds and prints the largest prime factor.
* of the number 612852475143.
* @n: the integer to print
*
*Return: nothing
*/

void print_number(int n)
{
	unsigned int i = n;

	if (n < 0)
	{
		_putchar('-');
		i = -i;
	}
	if ((i / 10) > 0)
		print_number(i / 10);
	_putchar((i % 10) + '0');
}
