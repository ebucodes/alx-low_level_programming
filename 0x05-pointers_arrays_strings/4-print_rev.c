#include "main.h"

/**
 * print_rev - a function that prints a
 * string in reverse.
 * @s: the string to input.
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i, m, w;

	m = 0;
	for (i = 0 ; s[i] != '\0' ; i++)
	{
		m++;
	}
	for (w = m - 1 ; w >= 0 ; w--)
	{
		_putchar(s[w]);
	}
	_putchar('\n');
}
