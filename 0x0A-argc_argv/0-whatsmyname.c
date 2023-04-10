#include <stdio.h>
#include "main.h"

/**
  * main - prints the program name followed by a new line.
  * @argc: argumet counter
  * @argv: pointer to array of arguments
  * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[argc * 0]);

	return (0);
}
