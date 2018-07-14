#include <stdio.h>
#include <stdlib.h>

/**
* main - prints product of two numbers
* @argc: amount of command line arguments passed
* @argv: array of strings recording each command line argument (numbers)
* Description: prints product of 2 numbers (arguments) passed to program,
* and "Error" if less than 3 total arguments given
* Return: 1 if not enough arguments passed, 0 otherwise
*/

int main(int argc, char *argv[])
{

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
		printf("%i\n", atoi(argv[1]) * atoi(argv[2]));


return (0);
}

