#include "main.h"
/**
 * get_bit - function
 * @n: number
 * @index: index within binary number
 * Return: bit 0 or 1, or -1 if error
 * Description: that returns the value of a bit at a given index.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_n;
	unsigned int max_bits;

	max_bits = (sizeof(unsigned long int) * 8);
	if (index > max_bits)
		return (-1);

	bit_n = ((n >> index) & 1);

	return (bit_n);
}
