#include "main.h"

/**
 * _strlen - length of string
 * @s: array of char
 * Return: int
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
		;
	return (i);
}
