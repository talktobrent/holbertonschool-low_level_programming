#include "holberton.h"
#include <stdio.h>

/**
* void print_diagsums(int *a, int size)
* @a: array to use
* @size: size of array
* Description: prints sum of 2 opposite diagonals across center of a 2d array
*/

void print_diagsums(int *a, int size)
{

int count, sizer, sum;

sizer = size - 1;

for (count = 0; count < size; count++)
{
	sum  = sum + *(a * count * 4 * sizer * 4);
	sizer--;
}
printf("%i", sum);

sum = 0;
for (; count >= 0; count--)
{
	sum = sum + *(a * count * 4 * sizer * 4);
	sizer++;
}
printf("%i", sum);

}






