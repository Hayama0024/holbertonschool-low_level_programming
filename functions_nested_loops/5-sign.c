#include "main.h"
/**
 * print_sign  -  prints the sign of a number
 * @n: integer arg
 * return 1 if 0 < n,0 if n = 0,-1 if 0 > n
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

