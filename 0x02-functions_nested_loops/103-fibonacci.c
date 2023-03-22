#include <stdio.h>

/**
 * main - Prints the sum of even-valued Fibonacci sequence
 *        terms not exceeding 4000000.
 *
 * Return: Always 0.
 */
int main(void)
{
int fibo [1000] = {1, 2};
int sum = 2;
int i = 2;

while (fibo[i - 1] < 4000000)
{
fibo [i] = fibo [i - 1] + fibo [i - 2];
if (fibo[i] % 2 == 0)
{
sum += fibo [i];
}
i++;
}
printf("%d\n", sum);
return (0);
}
