#include <stdio.h>

/**
 * main - Entry point, printing the
 * combination of two digit numbers.
 *
 * Return: 0
 */
int main(void)
{
	int i, j, k, l;

	for (i = 0 ; i <= 9 ; i++)
	{
		for (j = 0 ; j <= 8 ; j++)
		{
			putchar(i + '0');
			putchar(j + '0');
			putchar(' ');
			for (k = 0 ; k <= 9 ; k++)
			{
				for (l = k + 1 ; l <= 9 ; l++)
				{
					putchar(k + '0');
					putchar(l + '0');
			if (j <= 7)
			{
				putchar(',');
				putchar(' ');
			}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
