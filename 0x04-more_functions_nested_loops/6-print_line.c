#include "main.h"

/**
 * print_line - a function that draws a straight line
 * @n: is the number of times the character _ should be printed
 *
 * Return: void
 */
void print_line(int n)
{
	int i;

	i = 1;
	while (i <= n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
