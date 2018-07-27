#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
* sum_them_all - returns sum of any amount of parameters
* @n: number of args
* Return: sum of all args
*/


int sum_them_all(const unsigned int n, ...)
{
	va_list args;

	unsigned int sum, count;

	if (n == 0)
		return (0);

	sum = 0;

	va_start(args, n);

	for (count = 0; count < n; count++)
		sum = sum + va_arg(args, int);

	va_end(args);

	return (sum);
}


