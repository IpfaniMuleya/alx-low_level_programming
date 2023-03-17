#include <stdio.h>
/**
 * main - this is the staring point of execution
 * Return: gives 0 when error free
 */
int main(void)
{
	char lowercase = 'a';
	char uppercase = 'A';
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(lowercase);
		lowercase++;
	}
	for (i = 0; i < 26; i++)
	{
		putchar(uppercase);
		uppercase++;
	}
	putchar('\n');
	return (0);
}
