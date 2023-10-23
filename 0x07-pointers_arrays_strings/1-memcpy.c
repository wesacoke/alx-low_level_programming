#include "main.h"

/**
  * _memcpy - main function prototype
  * @src: Source parameter
  * @dest: Destination parameter
  * @n: Function parameter
  * Return: Copied memory
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int m;

	for (m = 0; m < n; m++)
	{
	dest[m] = src[m];
	}
	return (dest);
}
