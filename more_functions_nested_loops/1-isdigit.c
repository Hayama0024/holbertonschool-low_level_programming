#include "main.h"
#include <stdio.h>
/**
 * _isdigit - cheks for digit
 * @c: is an integer
 * Return: 1 if ture , 0 if false
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
