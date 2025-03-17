#include "function_pointers.h"
/**
 * print_name - prints the name with the function
 * @name: name to output
 * @f: function pointer
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
