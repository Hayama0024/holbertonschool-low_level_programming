#include "main.h"
/**
 * void print_diagonal - prints diagonal
 * @i: num of times
 */
void print_diagonal(int n)
{
	int i, j;

	if (0 < n)
	{
		for (i = 0; i < n; i++);
		{
			for (j = 0; j != i; j++);
			{
				_putchar(' ');
			}
		}
		_putchar('\\');
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
	
