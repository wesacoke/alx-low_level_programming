#include <stdio.h>

/**
 * main - Prints the lowercase alphabet in reverse.
 * followed by a newline
 * Return: Always 0 (Success)
 */

int main(void)
{
	char w;

	for (w = 'z'; w >= 'a'; w--)
	{
		putchar(w);
	}
	putchar('\n');
	return (0);
}
