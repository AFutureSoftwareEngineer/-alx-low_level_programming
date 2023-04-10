#include <stdio.h>
#include "main.h"

/**
  * main - prints the n of arg that were given to it.
  * @argc: argument counter
  * @argv: pointer to array of arguments
  * Return: 0 if success
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	int i;

	if (argc == 1)
		printf("%d\n", argc - 1);
	else
	{
		for (i = 0; *argv; i++, argv++)
			;

		printf("%d\n", i - 1);
	}

	return (0);
}
