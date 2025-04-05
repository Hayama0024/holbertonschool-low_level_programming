#include "main.h"

/**
 * print_binary - Prints the binary representation of a number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << 63;
	int started = 0;

	while (mask > 0)
	{
		if (n & mask)
		{
			_putchar('1');
			started = 1;
		}
		else if (started)
		{
			_putcahr('0');
		}
		mask >>= 1;
	}
	if (!started)
		_putchar('0');
}
