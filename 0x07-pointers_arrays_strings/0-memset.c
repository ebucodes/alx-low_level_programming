#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte.
 * @s: string containing b
 * @b: the constant byte used to fill up n area of memory
 * @n: the bytes of memory to be filled
 *
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
	{
		s[i] = b;
	}
	return (s);
}
