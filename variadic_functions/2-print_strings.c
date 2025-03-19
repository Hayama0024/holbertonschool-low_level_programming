#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - prints strings using vf
 * @separator: spring to separate strings
 * @n: number of strings to print
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list args;

	if (n == 0)
	{
		printf("\n");
		return;
	}

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		 char *str = va_arg(args, char *);

		 if (str == NULL)
			 printf("(nil)");
		 else
			 printf("%s", str);

		 if (i < n -1 && separator != NULL)
			 printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
