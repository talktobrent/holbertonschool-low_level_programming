#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

/**
* main - prints simple math operations
* @argc: number of arguments
* @argv: array of argument strings
* Description: prints results using helper function
* Return: always zero
*/


int main(int argc, char **argv)
{
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (get_op_func(argv[2]) == 0)
	{
		printf("Error\n");
		exit(99);
	}

	if ((*argv[3] == '0') && (*argv[2] == '/' || *argv[2] == '%'))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%i\n", get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3])));

return (0);
}


