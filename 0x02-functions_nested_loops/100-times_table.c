#include <stdio.h>
#include "main.h"

/**
 * print - recursion for long int
 * @n: The integer to print
 * Return: Void
 */
void print(long n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10)
	{
		print(n / 10);
	}
	_putchar(n % 10 + '0');
}

/**
 * print_times_table - a function that prints the n times
 * table, starting with 0.
 * @n: input number
 * Return: void
 */
void print_times_table(int n)
{
	int i, j, c;

	if (n > 15 || n < 0)
	{
		return;
	}
	for (i = 0 ; i <= n ; i++)
	{
		for (j = 0 ; j <= n ; j++)
		{
			c = i * j;
			if ((j != 0) && (c < 10))
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(c + '0');
			}
			else if ((j == 0) && (c < 10))
			{
				_putchar(c + '0');
			}
			else if (c > 99)
			{
				print(c);
			}
			else if ((j <= n) && (c >= 10))
			{
				_putchar(' ');
				_putchar((c / 10) + '0');
				_putchar((c % 10) + '0');
			}
			if (j < n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
