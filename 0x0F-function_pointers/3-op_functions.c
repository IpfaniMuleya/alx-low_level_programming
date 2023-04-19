#include "3-calc.h"

/**
 * op_add - adds two numbers
 * @a: first num
 * @b: second num
 *
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts two numbers
 * @a: first num
 * @b: second num
 *
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two numbers
 * @a: first num
 * @b: second num
 *
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two numbers
 * @a: first num
 * @b: second num
 *
 * Return: result of division of a by b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error: Can't divide by zero\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - modulus of two numbers
 * @a: first num
 * @b: second num
 *
 * Return: remainder of division of a by b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error: Can't divide by zero\n");
		exit(100);
	}
	return (a % b);
}
