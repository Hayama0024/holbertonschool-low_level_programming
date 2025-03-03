#include "main.h"
/**
 * _memset - fills memory with constant byte
 * @s: string
 * @b: specifique byte
 * @n: number of byte
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
