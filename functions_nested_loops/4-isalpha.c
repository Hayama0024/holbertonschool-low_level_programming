#include "main.h"
/**
 * int_isalpha(int c) - checks for alphabetic character
 * @c is an int type member
 * return 1 if ture, 0 if false
 */
int _isalpha(int c)
{
	if (c <= 'z' && c >= 'a')
		return (1);
	else if (c <= 'Z' && c >= 'A')
		return (1);
	else
		return (0);
}
