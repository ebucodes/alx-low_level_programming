#include "main.h"

/**
 * main - using the _putchar function
 * to print out strings.
 *
 * Return: 0
 */
int main(void)
{
	int i = 0;
	char ch[] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r', '\0'};

	while (ch[i] != '\0')
	{
		_putchar(ch[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
