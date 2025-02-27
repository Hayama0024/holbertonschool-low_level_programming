#include "main.h"
/**
 * puts - prints a char
 * @str: array of char
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

