#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: types of arguments to print
 * @...: arguments to print
 *
 * Return: nothing
 */

void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *sepa = "";
	char *st;

	va_start(args, format);
		while ((format) && (format[i]))
		{
			switch (format[i])
			{
			case 'c':
				printf("%s%c", sepa, va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", sepa, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", sepa, va_arg(args, double));
				break;
			case 's':
				st = va_arg(args, char *);
				if (st == NULL)
				{
					st = "(nil)";
				}
				printf("%s%s", sepa, st);
				break;
			default:
				i++;
				continue;
			}
			sepa = ", ";
			i++;
		}
	printf("\n");
	va_end(args);
}
