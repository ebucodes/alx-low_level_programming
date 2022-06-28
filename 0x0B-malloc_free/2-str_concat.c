#include "main.h"
#include<stdio.h>
#include<stdlib.h>

/**
 * _strlen - return string length
 * @a: char type
 * Return: string lenght
 */

int _strlen(char *a)
{
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
	}
	return (i);
}
/**
 * _strncat - function to return concatinated string
 * @dest: string destination
 * @src: string source
 * @n: int type size of bytes
 * Return:destination string
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len, a;

	dest_len = _strlen(dest);
	for (a = 0; a < n && src[a] != '\0'; a++)
	dest[dest_len + a] = src[a];
	return (dest);
}

/**
 * str_concat - a function to allocate memory space for string concatenated
 * @s1: char type
 * @s2: char type
 * Return: return pointer to copy of string
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int size1, size2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	size1 = _strlen(s1);
	size2 = _strlen(s2);

	ptr = malloc(((size1 + size2) + 1) * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	_strncat(ptr, s1, size1);
	_strncat(ptr, s2, size2);
	ptr += '\0';
	return (ptr);
}
