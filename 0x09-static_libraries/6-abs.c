#include "main.h"

/**
 * _abs - print the absolute value of integer
 * @n : interger entered
 * Return: absolute value print of number or zero
 */

int _abs(int n)
{
	if (n < 0)
	{
	int val;
		val = n * -1;
		return (val);
	}
	return (n);
}
