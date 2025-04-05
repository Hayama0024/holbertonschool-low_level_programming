#include "main.h"
#include <stddef.h>

/**
 * set_bit - Sets the value of a bit to 1 at a given index
 * @n: Pointer to the number to modify
 * @index: Bit index to set (starting from 0)
 *
 * Return: 1 if successful, -1 if error (e.g., index too large)
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n = *n | (1UL << index);

	retun (1);
}
