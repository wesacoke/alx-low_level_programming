#include "main.h"

int actual_prime(int w, int j);

/**
 * is_prime_number - says if an integer is a prime number or not
 * @w: number to evaluate
 * Return: 1 if n is a prime number, 0 if not
 */
int is_prime_number(int w)
{
	if (w <= 1)
	return (0);
	return (actual_prime(w, w - 1));
}

/**
 * actual_prime - calculates if a number is prime recursively
 * @w: number to evaluate
 * @j: iterator
 *
 * Return: 1 if n is prime, 0 if not
 */
int actual_prime(int w, int j)
{
	if (j == 1)
	return (1);
	if (w % j == 0 && j > 0)
	return (0);
	return (actual_prime(w, j - 1));
}
