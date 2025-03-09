#include <stdio.h>
#include "main.h"
/**
 * main - Prints its own program name
 * @argc: Number of arguments (not used in this program)
 * @argv: Array of arguments (argv[0] contains the program name)
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
