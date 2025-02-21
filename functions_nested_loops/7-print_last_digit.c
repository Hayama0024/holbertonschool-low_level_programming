#include "main.h"
/**
 * print_last_digit - print last digit
 * @i: integer
 * Return: last digit
 */
int print_last_digit(int i)
{
	int r = i % 10;

	if (r < 0)
		r *= -1;
	_putchar('0' + r);

	return (r);
}
