#include <stdio.h>

/**
 * main - Prints all possible different combinations of two digits
 * Return: Always 0(Success)
 */
int main(void)
{
	int n, m;

	for (n = 48; n <= 57; n++)
	{
		for (m = 48; m <= 57; m++)
		{
			if (n < m)
			{
				putchar(n);
				putchar(m);

				if (n != 56 || m != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
		putchar('\n');
		return (0);
	}
}
