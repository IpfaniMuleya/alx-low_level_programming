#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: the string to print between strings
 * @n: number of strings to print
 * @...: strings to print
 *
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;
	char *st;

	va_start(args, n);
	while (i < n)
	{
		st = va_arg(args, char *);
		if (st == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", st);
		}
		if ((i < n - 1) && (separator != NULL))
		{
			printf("%s", separator);
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
