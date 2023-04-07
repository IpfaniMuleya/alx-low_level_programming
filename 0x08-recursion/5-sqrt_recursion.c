#include "main.h"

/**
 * sqqrrt - square root checker
 * @digi: variable
 * @rt: guess root of variable
 * Return: square root of number
 *  or -1 otherwise
 */

int sqqrrt(int digi, int rt)
{
	if ((rt * rt) == digi)
	{
		return (rt);
	}
	else
	{
		if ((rt * rt) > digi)
		{
			return (-1);
		}
		else
		{
			return (sqqrrt(digi, rt + 1));
		}
	}
}

/**
 * _sqrt_recursion - gives the square root of n
 * @n: input variable
 * Return: -1 when n < 0
 * n when n is 0 0r 1
 * and the squareroot otherwise
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (sqqrrt(n, 0));
	}
}
