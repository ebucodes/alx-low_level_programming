#include "main.h"

/**
 * _isalpha - function used to check
 * if inputs consist of alphabet.
 * @c: character to be inputed.
 *
 * Return: 1 if alphabet and
 * 0 if otherwise.
 */
int _isalpha(int c)
{
	int i, j;

	for (i = 'a'; i <= 'z'; i++)
	for (j = 'A'; j <= 'Z'; j++)
	if (c == i || c == j)
	return (1);
	return (0);
}
