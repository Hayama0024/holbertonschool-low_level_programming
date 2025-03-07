#include "main.h"

/**
 * sqrt_helper - finds the natural square root recursively
 * @n: number to find the square root of
 * @i: current iterator (guessed root)
 *
 * Return: natural square root, or -1 if not found
 */
int sqrt_helper(int n, int i)
{
	if (i * i == n)
		return (i);

	if (i * i > n)
		return (-1);

	return (sqrt_helper(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer to find the square root of
 *
 * Return: natural square root, or -1 if n has no natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (sqrt_helper(n, 1));
}
