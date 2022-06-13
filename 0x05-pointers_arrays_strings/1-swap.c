#include "main.h"

/**
 * swap_int - a function that swaps the
 * values of two integers.
 * @a: integer to input
 * @b: second integer to input
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *b;
	*b = *a;
	*a = temp;
}
