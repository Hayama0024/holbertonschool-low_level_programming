#include "main.h"
#include <stddef.h>

/**
 * get_bit - Returns the value of a bit at a given index
 * @n: The number to examine
 * @index: The index of the bit to retrieve (starting from 0)
 *
 * Return: The value of the bit (0 or 1), or -1 if an error occurred
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
	{
		return (-1);
	}
	if (n & (1UL << index))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
