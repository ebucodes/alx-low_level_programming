#include <stdio.h>

/**
 * main - Entry point, prints out all
 * single digit in base ten.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
		printf("%d", i);
	putchar('\n');
	return (0);
}
