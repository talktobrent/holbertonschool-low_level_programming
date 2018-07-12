#include "holberton.h"

/**
* primetest - tests for prime number
* @n: number to see if prime
* @x: test number to be incremented
* Return: 0 if not prime, 1 if prime
*/

int primetest(int n, int x);

int primetest(int n, int x)
{
	if (n == x)
		return (1);
	if (n % x == 0)
		return (0);

	return (primetest(n, x + 1));
}

/**
* is_prime_number - finds if prime number
* @n: number to be tested
* Return: 0 if not prime, 1 if prime
*/

int is_prime_number(int n)

{
	if (n > -2 && n < 2)
		return (0);
	return (primetest(n, 2));
}

