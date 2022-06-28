#include "main.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * _strlen - return length of string
 * @s: char type
 * Return: lenght of string
 */

int _strlen(char *s)
{
	int y;

	for (y = 0; s[y] != '\0'; y++)
	{

	}
	return (y);
}

/**
 * _strdup - a function that returns a pointer
 * to a newly allocated space in memory
 * @str: pointer to string array input
 * Return: pointer to string created
 */
char *_strdup(char *str)
{
	char *ptr;
	int size;
	int x;

	if (str == NULL)
	{
		return (NULL);
	}
	size = _strlen(str) + 1;
	ptr = malloc(size * sizeof(char));
	x = 0;
	while (x < size)
	{
		if (ptr == NULL)
		{
			return (NULL);
		}
		ptr[x] = str[x];
		x++;
	}
	return (ptr);
	}
