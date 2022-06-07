#include "main.h"

/**
 * print_last_digit - function that prints out
 * the last digit of a number.
 * @c: the integer to input
 *
 * Return: c
 */
int print_last_digit(int c)
{
	int a;

	a = (c % 10);
	if (a < 0)
	{
		a = (-1 * a);
	}
	_putchar('0' + a);
	return (a);
}
