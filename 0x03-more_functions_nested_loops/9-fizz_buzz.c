#include <stdio.h>
/**
* main - finds multiples of 3 and 5
*
* Description: Prints 'Fizz' for multiples of 3,
* Buzz for multiples of 5
*
* Return: Always 0
*/

int main(void)
{
int num;
	for (num = 1; num < 101; num++)
	{
		if ((num % 3 == 0) && (num % 5 == 0))
			printf("FizzBuzz");
		else if (num % 3 == 0)
			printf("Fizz");
		else if (num % 5 == 0)
			printf("Buzz");
		else
			printf("%i", num);
		if (num < 100)
			printf(" ");
	}
printf("\n");
return (0);
}
