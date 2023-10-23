#include "main.h"

/**
  * _strchr - main function
  * @w: Function parameter
  * @d: Function parameter
  * Return: Always o.
  */
char *_strchr(char *w, char d)
{
	int k;

	for (k = 0; w[k] >= '\0'; k++)
	{
	if (w[k] == d)
	return (w + k);
	}
	return (0);
}
