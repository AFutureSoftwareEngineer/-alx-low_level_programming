#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	char letter;

	letter = 'a';
	while (letter != '{')
	{
		putchar (letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
