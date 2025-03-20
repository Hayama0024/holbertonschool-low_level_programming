#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - prints anything based on the given format
 * @format: string that contains format specifiers
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char *separator = "", *str;

	va_start(args, format);

	while (format && format[i] != '\0')
	{
		if (format[i] == 'c' || format[i] == 'i' ||
			format[i] == 'f' || format[i] == 's')
		{
			printf("%s", separator);
			separator = ", ";

			while (1)
			{
				if (format[i] == 'c')
					printf("%c", va_arg(args, int));
				else if (format[i] == 'i')
					printf("%d", va_arg(args, int));
				else if (format[i] == 'f')
					printf("%f", va_arg(args, double));
				else
				{
					str = va_arg(args, char *);
					if (str == NULL)
						str = "(nil)";
					printf("%s", str);
				}
				break;
			}
		}
		i++;
	}
	va_end(args);
	printf("\n");
}

