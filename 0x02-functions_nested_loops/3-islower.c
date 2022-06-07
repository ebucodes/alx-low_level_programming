#include "main.h"

/**
 * _islower - a function that checks
 * for lowercase alphabet.
 * @c: caharacter to input.
 *
 * Return: 1 if lowercase
 * 0 if otherwise.
 */
int _islower(int c)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	if (c == i)
	return (1);
	return (0);
}
