#include "main.h"

/**
 * _strcpy - a function copies the string pointed to by a
 * variable to another variable.
 * @dest: variable to copy to
 * @src: variable to copy from
 *
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0 ; src[i] != '\0' ; i++)
	{
		dest[i] = src[i];
	}
	if (src[i] == '\0')
	{
		dest[i] = '\0';
	}
	return (dest);
}
