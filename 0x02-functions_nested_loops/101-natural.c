#include <stdio.h>

/**
 * main - Prints first 50 Fibonacci number
 *
 * Return: Always 0.
 */
int main(void)
{
	int count;
	unsigned long fib1 = 0, fib2 = 1, sum;

	for (count = 2; count < 50; count++)
	{
		sum = fib1 + fib2;
		fib1 = fib2;
		fib2 = sum;
	}
	printf("%lu\n", fib2);
	return (0);
}
