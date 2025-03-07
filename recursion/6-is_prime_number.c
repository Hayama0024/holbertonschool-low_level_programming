#include "main.h"

/**
 * check_prime - checks recursively if number is prime
 * @n: number to check
 * @i: iterator to check divisibility
 *
 * Return: 1 if prime, otherwise 0
 */
int check_prime(int n, int i)
{
	if (n <= 1)
		return (0);

	if (i * i > n)
		return (1);

	if (n % i == 0)
		return (0);

	return (check_prime(n, i + 1));
}

/**
 * is_prime_number - returns 1 if n is prime, 0 otherwise
 * @n: integer to check
 *
 * Return: 1 if prime, 0 if not prime
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (check_prime(n, 2));
}
