#include "holberton.h"
#include <stdio.h>

/**
* print_diagsums - prints sum of diagonals on 2d array
* @a: array to use
* @size: size of array
* Description: prints sum of 2 opposite diagonals across center of a 2d array
*/

void print_diagsums(int *a, int size)
{

int count, sum;

sum = 0;
for (count = 0; count < size; count++)
{
	sum  = sum + *(a + (count * size) + count);
}
printf("%i, ", sum);

sum = 0;
for (count = size; count > 0; count--)
{
	sum = sum + *(a + (count * size) - count);
}
printf("%i\n", sum);

}


