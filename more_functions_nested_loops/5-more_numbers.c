#include "main.h"
/**
 * more_numbers - prints 10times the numers, 0 to 14
 */
void more_numbers(void)
{
	int i, num;

	for (i = 0; i < 10; i++)
	{
		for (num = 0; num < 14; num++)
		_putchar(num);
	}
	_putchar('\n');
}

