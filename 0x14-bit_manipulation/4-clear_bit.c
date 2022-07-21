#include "main.h"
#include <stdio.h>

/**
 * clear_bit - a function that sets the value of
 * a bit to 0 at a given index.
 * @n: input number
 * @index: index
 * Return: 1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bits;

	if (index >= sizeof(unsigned int) * sizeof(long))
		return (-1);
	bits = 1 << index;
	if ((bits | *n) == *n)
		*n = *n ^ bits;
	return (1);
}
