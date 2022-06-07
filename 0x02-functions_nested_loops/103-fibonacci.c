#include <stdio.h>

/**
 * main - a program that prints the first 50 Fibonacci
 * numbers, starting with 1 and 2, followed by a new line.
 * Return: 0
 */
int main(void)
{
	int a, b, c, i, sum;

	a = 2;
	b = 1;
	c = 1;
	/* Iterate through 50 */
	for (i = 1; i <= 32; i++)
	{
		sum = 0;
		if ((c % 2) == 0)
		{
			sum += c;
		}
		a = b;
		b = c;
		c = a + b;
	}
	printf("%d", sum);
	printf("\n");
	return (0);
}
