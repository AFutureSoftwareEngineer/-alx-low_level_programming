#include <stdlib.h>

/**
 * print_name - prints a name.
 * @name: parameter givin to print_name
 * @f:function to execute
 *
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
