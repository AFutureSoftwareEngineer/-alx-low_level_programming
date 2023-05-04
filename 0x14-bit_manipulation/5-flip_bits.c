#include "main.h"

/**
 * flip_bits - function
 * @n: number
 * @m: number2
 * Return: how many bits differ
 * Description: returns the number of bits you would
 * need to flip to get from one number to another.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int diff_bits = 0;
	unsigned long int dif;

	dif = n ^ m;

	do {
		diff_bits += (dif & 1);
		dif >>= 1;
	} while
		(dif > 0);

	return (diff_bits);
}
