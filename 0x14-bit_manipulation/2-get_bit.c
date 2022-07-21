#include "main.h"
#include <stdio.h>

/**
 * get_bit - a function that returns the value
 * of a bit at a given index.
 * @n: input number
 * @index: is the index, starting from 0
 * of the bit you want to get
 * Return: value of bit or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bits;

	if (index >= sizeof(unsigned int) * sizeof(long))
		return (-1);
	bits = ((n >> index) & 1);
	if ((bits == 1) || (bits == 0))
		return (bits);
	return (0);
}
