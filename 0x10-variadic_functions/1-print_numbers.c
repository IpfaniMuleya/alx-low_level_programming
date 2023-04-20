#include "variadic_functions.h"

/**
 * print_numbers - prints number variables seperated by a string
 * @separator: string to seperate numbers,
 * or NULL if no seperator
 * @n: number of integers to print
 * @...: integers to print
 *
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;

	va_start(args, n);
	while (i < n)
	{
		printf("%d", va_arg(args, int));
		if ((i < n - 1) && (separator != NULL))
		{
			printf("%s", separator);
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
