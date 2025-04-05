#include "main.h"
#include <stddef.h>

/**
 * clear_bit - Sets the value of a bit to 0 at a given index
 * @n: Pointer to the number to modify
 * @index: Bit index to clear (starting from 0)
 *
 * Return: 1 if successful, -1 if error (e.g., index too large)
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n = *n & ~(1UL << index);

	return (1);
}
