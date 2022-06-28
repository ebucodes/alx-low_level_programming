#include "main.h"
#include<stdio.h>
#include<stdlib.h>

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: unsigned int type
 * @c: char type
 * Return: pointer of an array
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	s = malloc((size) * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	s[i] = '\0';
	return (s);
}
