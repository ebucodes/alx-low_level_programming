#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - function that prints
 * natural numbers up to 98.
 * @n: the starting point for the number
 *
 * Return: list of numbers
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(",");
				printf(" ");
			}
		n++;
		}
	}
	else if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(",");
				printf(" ");
			}
		n--;
		}
	}
	else
	{
		printf("98");
	}
	printf("\n");
}
