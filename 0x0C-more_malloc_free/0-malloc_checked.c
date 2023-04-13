#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - Allocates memory using malloc
 *
 * @b: The number of bytes to allocate
 *
 * Return: Pointer to the allocated memory block
 *         Terminate process with exit status 98 on failure
 */
void *malloc_checked(unsigned int b)
{
	void  *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
