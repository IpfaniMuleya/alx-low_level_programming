#include <stdio.h>

/**
 * before_main - function called before main
 *
 * Return: nothing
 */

void __attribute__ ((constructor)) before_main()
{
	printf("You're beat! and yet, you must allow,\n"
		"I bore my house upon my back!\n");
}
