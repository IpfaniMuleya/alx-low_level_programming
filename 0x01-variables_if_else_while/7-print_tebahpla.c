#include <stdio.h>
/**
 * main - this is the starting point of program execution
 * Return: gives 0 when error free
 */
int main(void)
{
	char letter = 'z';

	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}
	putchar('\n');
	return (0);
}
