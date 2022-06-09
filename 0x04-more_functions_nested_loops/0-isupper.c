#include "main.h"

/**
 * _isupper - a function that checks for uppercase character.
 * @c: character t be checked
 *
 * Return: 1
 */
int _isupper(int c)
{
	int i;

	for (i = 'A' ; i <= 'Z' ; i++)
	{
		if (c == i)
		{
			return (1);
		}
	}
	return (0);
}
