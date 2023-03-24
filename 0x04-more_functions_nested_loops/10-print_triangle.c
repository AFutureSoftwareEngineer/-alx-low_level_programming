#include "main.h"

/**
 * print_triangle - Prints a triangle of square according parameter
 * @size: sets the size of the triangle
 *
 * Return: nothing
 */

void print_triangle(int size)
{
	int x, y;

	if (size > 0)
		for (x = size; x > 0; x--)
		{
			for (y = 1; y <= size; y++)
				if (y >= x)
					_putchar('#');
				else
					_putchar(' ');
			_putchar('\n');
		}
	else
		_putchar('\n');
}
