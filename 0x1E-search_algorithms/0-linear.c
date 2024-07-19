#include "search_algos.h"
/**
 * linear_search-searches for a value in an array of integers
 * @array: List of integers to search
 * @size: The size of integers provided
 * @value: The actual value to search for
 * Return: If the array is not present or NULL.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	/* Check if the array is NULL */
	if (array == NULL)
		return (-1);

	/* Iterate over each element of the array */
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);

		if (array[i] == value)
			return (i);
	}
	return (-1);
}
