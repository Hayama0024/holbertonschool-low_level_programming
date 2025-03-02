#include "main.h"
/**
 * _strcat - appends string to other string
 * @dest: array of string
 * @str: array of string
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0')
	{
		dest[i] = str[j]
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
