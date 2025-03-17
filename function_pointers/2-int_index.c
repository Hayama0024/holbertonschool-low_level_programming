#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - returns the first elements which
 * suits the condition
 * @array: string
 * @size: number of elements
 * @cmp: compare function pointer
 * Return: the first one or -1
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
