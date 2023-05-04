#include "main.h"

/**
 * binary_to_uint - function
 * @b: binary
 * Return: unsigned int
 * Description: converts a
 * binary number to an unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int u_in;
	int len, base_two;

	if (!b)
		return (0);

	u_in = 0;

	for (len = 0; b[len] != '\0'; len++)
		;

	for (len--, base_two = 1; len >= 0; len--, base_two *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}

		if (b[len] & 1)
		{
			u_in += base_two;
		}
	}

	return (u_in);
}
