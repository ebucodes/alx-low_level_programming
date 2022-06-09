#include "main.h"
#include <stdio.h>

/**
 * main - a program that prints the numbers from 1 to 100
 * but prints Fizz, Buzz and FizzBuzz for multiples of 3, 5
 * and both respectively.
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 1 ; i <= 100 ; i++)
	{
		if (((i % 3) == 0) && ((i % 5) == 0))
		{
			printf(" FizzBuzz");
		}
		else if ((i % 3) == 0)
		{
			printf(" Fizz");
		}
		else if ((i % 5) == 0)
		{
			printf(" Buzz");
		}
		else if (i == 1)
		{
			printf("%d", i);
		}
		else
		{
			printf(" %d", i);
		}
	}
	printf("\n");
	return (0);
}
