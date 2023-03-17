#include <stdio.h>
/**
 * main - this is the starting point of program execution
 * Return: gives 0 when error free
 */
int main(void)
{
	int i;

	for (i = 0; i < 16; i++)
	{
		if (i < 10)
			putchar('0' + i);
		else
			putchar('a' + (i - 10));
	}
	putchar('\n');
	return (0);
}
