#include "main.h"
/**
 * void print_diagonal - prints diagonal
 * @i: num of times
 */
void print_diagonal(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n > 0)
			_putchar('\\');
		else
			_putchar('\n');
	}
	_putchar('\n');
}
