#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int t, e, n, len, w, digit;

	t = 0;
	e = 0;
	n = 0;
	len = 0;
	w = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;
	while (t < len && w == 0)
	{
		if (s[t] == '-')
			++e;
		if (s[t] >= '0' && s[t] <= '9')
		{
			digit = s[t] - '0';
			if (e % 2)
				digit = -digit;
			n = n * 10 + digit;
			w = 1;
			if (s[t + 1] < '0' || s[t + 1] > '9')
				break;
			w = 0;
		}
		t++;
	}
	if (w == 0)
		return (0);
	return (n);
}
/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of argument
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = num1 * num2;
	printf("%d\n", result);
	return (0);
}
