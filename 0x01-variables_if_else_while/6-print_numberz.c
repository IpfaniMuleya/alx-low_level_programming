#include <stdio.h>
/**
 * main - this is the starting point of program execution
 * Return: gives 0 when error free
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');
	return (0);
}
