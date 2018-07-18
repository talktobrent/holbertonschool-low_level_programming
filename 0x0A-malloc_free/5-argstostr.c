#include <stdlib.h>
#include "holberton.h"

/**
* argstostr - concatenates all arguments
* @ac: argument count
* @av: arguments array
* Description: creates a string of all arguments passed
* Return: pointer to new string, NULL if fail
*/

char *argstostr(int ac, char **av)
{
	int place, length, x;
	char *args;

	x = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (place = 0; place < ac; place++)
	{
		for (length = 0; av[place][length] != '\0'; length++)
		{
			x++;
		}
	x++;
	}

	args = malloc(sizeof(char) * x);
	if (args == NULL)
	{
		free(args);
		return (NULL);
	}

	x = 0;
	for (place = 0; place < ac; place++)
	{
		for (length = 0; av[place][length] != '\0'; length++)
		{
			args[x] = av[place][length];
			x++;
		}
		args[x] = '\n';
		x++;
	}
args[x] = '\0';
return (args);
}

