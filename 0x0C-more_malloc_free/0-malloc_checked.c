#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * malloc_checked - a function that allocates memory using malloc.
 * @b: input amount
 *
 * Return: pointer to new mem
 */
void *malloc_checked(unsigned int b)
{
	void *mem;

	mem = malloc(b);

	if (mem == NULL)
	{
		exit(98);
	}
	return (mem);
}
