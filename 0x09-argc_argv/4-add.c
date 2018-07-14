#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
* main - prints sum of any numbers
* @argc: amount of command line arguments passed
* @argv: array of strings recording each command line argument (numbers)
* Description: prints sum of all numerical arguments, "Error" if any
* non-numerics given, and "0" if no arguments given
* Return: 1 if non numericals passed, 0 if no arguments, and 0 if all arguments
* are numericals
*/

int main(int argc, char *argv[])
{
int count, test, sum;
sum = 0;

if (argc < 2)
{
	printf("0\n");
	return (0);
}

for (count = 1; count < argc; count++)
{
	for (test = 0; argv[count][test] != '\0'; test++)
	{
		if (!isdigit(argv[count][test]))
		{
			printf("Error\n");
			return (1);
		}
	}
	sum = sum + atoi(argv[count]);
}
printf("%i\n", sum);
return (0);
}


