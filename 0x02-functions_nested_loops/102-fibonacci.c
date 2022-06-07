#include <stdio.h>

/**
 * main - a program that prints the first 50 Fibonacci
 * numbers, starting with 1 and 2, followed by a new line.
 * Return: 0
 */
int main(void)
{
	int a, b, c, i;

	a = 2;
	b = 1;
	c = 1;

	/* Iterate through 50 */
	for (i = 1; i <= 50; i++)
	{
		if (i < 50)
		{
			printf("%d, ", c);
		}
		else
		{
			printf("%d", c);
		}

		a = b;
		b = c;
		c = a + b;
	}
	printf("\n");
	return (0);
}
