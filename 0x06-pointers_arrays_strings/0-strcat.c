#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 *
 * Return: void
 */

char *_strcat(char *dest, char *src)
{
	int w;
	int j;

	w = 0;
	while (dest[w] != '\0')
	{
		w++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[w] = src[j];
		w++;
		j++;
	}
	dest[w] = '\0';
	return (dest);
}
