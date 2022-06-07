#include "main.h"

/**
 * _abs - function that prints
 * absolute value of a number.
 * @c: the integer ti input.
 *
 * Return: 0
 */
int _abs(int c)
{
	int a;

	if (c >= 0)
		return (c);
	else if (c < 0)
		a = c * -1;
	return (a);
}
