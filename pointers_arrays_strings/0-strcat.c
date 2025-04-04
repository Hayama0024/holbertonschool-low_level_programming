#include "main.h"
/**
 * _strcat - appends string to other string
 * @dest: array of string
 * @src: array of string
 * Return: return dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
