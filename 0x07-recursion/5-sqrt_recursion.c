#include "holberton.h"

/**
* tester - tests for square root
* @n: number to find square root of
* @x: test number to be incremented
* Return: final working x
*/

int tester(int n, int x);

int tester(int n, int x)
{
	if (n == x * x)
		return (x);
	if (n < x * x)
		return (-1);

	return (tester(n, x + 1));
}

/**
* _sqrt_recursion - find natural square root
* @n: number to be tested
* Return: square root of n
*/

int _sqrt_recursion(int n)

{
	if (n < 0)
		return (-1);
	return (tester(n, 0));
}

