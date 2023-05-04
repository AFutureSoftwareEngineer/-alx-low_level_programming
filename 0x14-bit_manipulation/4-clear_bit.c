#include "main.h"

/**
 * clear_bit - function
 * @n: number
 * @index: index within binary number
 * Return: 1 if success, or -1 if error
 * Description: that sets the value of a bit to 0 at a given index.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit_m;
	unsigned long int mask = 1;

	bit_m = (sizeof(unsigned long int) * 8);
	if (index > bit_m)
		return (-1);

	mask = ~(mask << index);
	*n = (*n & mask);

	return (1);
}
