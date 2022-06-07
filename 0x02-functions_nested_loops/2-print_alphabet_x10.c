#include "main.h"

/**
 * print_alphabet_x10 - a function that prints the
 * alphabet in lower case ten times more.
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i, j;

	j = 1;
	while (j <= 10)
	{
		for (i = 'a' ; i <= 'z' ; i++)
		{
			_putchar(i);
		}
		j++;
		_putchar('\n');
	}
	i++;
}
