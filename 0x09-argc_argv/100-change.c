#include <stdio.h>
#include <stdlib.h>

/**
* main - prints number of coins made with change
* @argc: amount of command line arguments passed
* @argv: array of strings recording each command line argument
* Description: prints minimum amount of coins exchanged for amount given
* in argv* [1], coins are: 25, 10, 5, 2, 1
* Return: 1 if not enough arguments passed, 0 otherwise
*/

int main(int argc, char *argv[])
{
int count, dollar;
count = 0;


if (argc != 2)
{
	printf("Error\n");
		return (1);
}


dollar = atoi(argv[1]);

if (dollar < 1)
{
	printf("0\n");
	return (0);
}

while (dollar / 25 >= 1)
{
	dollar = dollar - 25;
	count++;
}

while (dollar / 10 >= 1)
{
	dollar = dollar - 10;
	count++;
}

while (dollar / 5 >= 1)
{
	dollar = dollar - 5;
	count++;
}

while (dollar / 2 >= 1)
{
	dollar = dollar - 2;
	count++;
}

while (dollar / 1 >= 1)
{
	dollar = dollar - 1;
	count++;
}

printf("%i\n", count);
return (0);
}

