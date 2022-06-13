#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - random valid passwords for the program 101-crackme
 *
 * Return: Always 0
 */
int main(void)
{
	char a[100];
	int b, c, d;

	b = 0;
	c = 0;
	srand(time(NULL));
	while (c < 2645)
	{
		b = rand() % 122;
		if (b > 32)
		{
			a[d++] = b;
			c += b;
		}
	}
	a[d++] = (2772 - c);
	a[d] = '\n';
	printf("%s", a);
	return (0);
}
