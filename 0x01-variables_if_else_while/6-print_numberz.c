#include <stdio.h>

/**
 * main - Entry print single digit numbers to base 10
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int i;
for (i = 0; i <= 9 ; i++)
{
putchar(i + '0');
}
putchar('\n');

return (0);
}
