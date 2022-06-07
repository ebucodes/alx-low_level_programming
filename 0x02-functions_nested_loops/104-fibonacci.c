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

	for (i = 1; i <= 98; i++)
	{
		if (i < 98)
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
	printf("%d", i);
	return (0);
}
