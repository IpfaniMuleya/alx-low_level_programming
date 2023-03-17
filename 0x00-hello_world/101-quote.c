#include <stdio.h>
#include <unistd.h>
/**
 * main - this is the starting point for program execution
 *
 * Return: 1 for error free
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
