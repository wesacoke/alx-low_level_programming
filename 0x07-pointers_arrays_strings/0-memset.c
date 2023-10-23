#include "main.h"

/**
  * _memset - main function of the prototype
  *
  * @b: The value used to fill the memory
  *
  * @s: Function paramater
  *
  * @k: Function parameter
  *
  * Return: s
  */
char *_memset(char *s, char b, unsigned int k)
{
	unsigned int a;

	for (a = 0; a < k; a++)
	s[a] = b;
	return (s);
}
