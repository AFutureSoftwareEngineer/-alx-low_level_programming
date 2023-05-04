#include "main.h"

/**
 * set_bit - function
 * @n: number
 * @index: index within binary number
 * Return: 1 if success, or -1 if error
 * Description: that sets the value of a bit to 1 at a given index.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int bit_m;
	unsigned long int mask = 1;

	bit_m = (sizeof(unsigned long int) * 8);
	if (index > bit_m)
		return (-1);

	mask <<= index;
	*n = (*n | mask);

	return (1);
}
