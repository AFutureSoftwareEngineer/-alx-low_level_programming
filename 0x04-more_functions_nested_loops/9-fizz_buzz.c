#include "main.h"
#include <stdio.h>

/**
 * main - prints the numbers since 1 up to 100
 * 3 multiples print Fizz instead of the number
 * 5 multiples print Buzz instead of the number
 * 3 & 5 multiples print FizzBuzz instead of the number
 * Return: Always 0
 */
int main(void)
{
	int i;
	char fi[] = "Fizz";
	char bu[] = "Buzz";
	char fibu[] = "FizzBuzz";

	for (i = 1; i <= 100; i++)
	{
		if (i == 100)
			printf("%s", bu);
		else if ((i % 3 == 0) && (i % 5 == 0))
			printf("%s ", fibu);
		else if (i % 3 == 0)
			printf("%s ", fi);
		else if (i % 5 == 0)
			printf("%s ", bu);
		else
			printf("%d ", i);
	}
	printf("\n");
	return (0);
}
