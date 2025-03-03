#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: string
 * @src: string copies into dest
 * @n: number of byte
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
