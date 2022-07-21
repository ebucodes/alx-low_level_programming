#include "main.h"
#include <stdio.h>

/**
 * set_bit - a function that sets the value of
 * a bit to 1 at a given index.
 * @n: input number
 * @index: is the index, starting from 0
 * Return: value of bit or -1 if an error occured
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bits;

	if (index >= sizeof(unsigned int) * sizeof(long))
		return (-1);
	bits = 1 << index;
	*n = *n | bits;
	return (1);
}
