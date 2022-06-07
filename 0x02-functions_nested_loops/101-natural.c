#include <stdio.h>

/**
 * main - a program that prints the sum numbers
 * from 1 to 1024 that are multiples of 3, 5.
 * Return: void
 */
int main(void)
{
	int i, sum = 0;

	for (i = 1 ; i < 1024 ; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
		{
			sum += i;
		}
	}
	printf("%d", sum);
	printf("\n");
	return (0);
}
