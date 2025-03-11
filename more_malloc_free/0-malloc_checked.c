#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - allocate memory with malloc
 * @b: integer
 * Return: new space available
 * code 98 if not
 */
void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	exit(98);
	return (ptr);
}
