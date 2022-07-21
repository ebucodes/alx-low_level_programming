#include "main.h"
#include <stdio.h>

/**
 * print_binary - a function that prints the binary
 * representation of a number.
 * @n: number to convert.
 * Return: binary
 */
void print_binary(unsigned long int n)
{
	int mov = 0, mov_num;
	unsigned long int bin, tmp;

	if (n == 0)
	{
		printf("0");
		return;
	}
	tmp = n;
	while (tmp != 0)
	{
		mov++;
		tmp = tmp >> 1;
	}
	for (mov_num = mov - 1; mov_num >= 0; mov_num--)
	{
		bin = n >> mov_num;
		if (bin & 1)
			printf("1");
		else
			printf("0");
	}
}
