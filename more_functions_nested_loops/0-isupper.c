#include "main.h"
#include <stdio.h>
/**
 *_isupper - checks for uppercase
 * @c: is an int type number
 * Return: 1 if ture, 0 if false
 */
int _isupper(int c)
{
	if (c <= 'Z' && c >= 'A')
		return (1);
	else
		return (0);
}
