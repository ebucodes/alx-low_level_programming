#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - a function that converts a
 * binary number to an unsigned int.
 * @b: string of 0 and 1 chars
 * Return: decimal
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0;
	int i = 0, pow = 1;

	if (b == NULL)
		return (0);
	while (b[i + 1])
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		i++;
	}
	while (i >= 0)
	{
		dec = dec + ((b[i] - '0') * pow);
		pow = pow * 2;
		i--;
	}
	return (dec);
}
