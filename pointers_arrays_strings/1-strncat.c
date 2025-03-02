#include "main.h"
/**
 * _strcat - appends string to other string
 * @dest: array of string
 * @src: array of string
 * @n: integer
 * Return: return dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;
	{
		while (j < n && src[j] != '\0')
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

