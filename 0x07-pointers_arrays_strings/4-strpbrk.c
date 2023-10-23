#include "main.h"

/**
  * _strpbrk - main function of the prototype
  *
  * @s: function parameter
  *
  * @accept: Fuunction parameter
  *
  * Return: Always 0.
  */

char *_strpbrk(char *s, char *accept)
{
	int w, d;

	for (w = 0; s[w] != '\0'; w++)
	{
	for (d = 0; accept[d] != '\0'; d++)
	{
	if (s[w] == accept[d])
	return (s + w);
	}
	}
	return (0);
}
