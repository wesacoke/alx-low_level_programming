#include "main.h"

/**
 * reverse_array - reverse array of integers
 * @z: array
 * @n: number of elements of array
 *
 * Return: void
 */

void reverse_array(int *z, int n)
{
	int w;
	int t;

	for (w = 0; w < n--; w++)
	{
		t = z[w];
		z[w] = z[n];
		z[n] = t;
	}
}
