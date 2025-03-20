#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
* print_all - prints anything based on the given format
* @format: a string that contains format specifiers
*
* Description: This function prints `char`, `int`, `float`, and `string`
* arguments separated by `", "`, and ignores invalid specifiers.
* If a string argument is NULL, it prints `(nil)`.
*/
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char *separator = "", *str;

	va_start(args, format);

	if (format)
	{
		while (format[i] != '\0')
		{
			if (format[i] == 'c' || format[i] == 'i' ||
				format[i] == 'f' || format[i] == 's')
			{
				printf(" %s ", separator);
				separator = ", ";

				switch (format[i])
				{
					case 'c';
						printf(" %c ", va_arg(args, int));
						break;
					case 'i':
						printf(" %d ", va_arg(args, int));
						break;
					case 'f':
						printf(" %f ", va_arg(args, double));
						break;
					case 's':
						str = va_arg(args, char *);
						printf(" %s ", (str ? str : "(nil)"));
						break;
				}
			}
			i++;
		}
	}
	va_end(args);
	printf("\n");
}
