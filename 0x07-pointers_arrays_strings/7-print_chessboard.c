#include "main.h"

/**
  * print_chessboard - main function
  *
  * @a: function parameter declared
  *
  * Return: Always 0.
  */
void print_chessboard(char (*a)[8])
{
	int w;
	int s;

	for (w = 0; w < 8; w++)
	{
	for (s = 0; s < 8; s++)
	_putchar(a[w][s]);
	_putchar('\n');
	}
}
