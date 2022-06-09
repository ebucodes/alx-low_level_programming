#include "main.h"

/**
 * _isdigit - a function that checks for a digit (0 through 9).
 * @c: input
 *
 * Return: 1
 */
int _isdigit(int c)
{
	int i;

	for (i = '0' ; i <= '9' ; i++)
	{
		if (c == i)
		{
			return (1);
		}
	}
	return (0);
}
