#include "variadic_functions.h"

/**
 * print_all - functions prints anything
 * @format: type of arguments
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list p;
	char *sep = "", *s;
	int  i = 0;

	va_start(p, format);
	if (format)
	{
	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", sep, va_arg(p, int));
				break;
			case 'i':
				printf("%s%d", sep, va_arg(p, int));
				break;
			case 'f':
				printf("%s%f", sep, va_arg(p, double));
				break;
			case 's':
				s = va_arg(p, char *);
				if (!s)
					s = "(nil)";
				printf("%s%s", sep, s);
				break;
			default:
				i++;
				continue;
		}
		sep = ", ";
		i++;
	}
	}
	printf("\n");
	va_end(p);
}
