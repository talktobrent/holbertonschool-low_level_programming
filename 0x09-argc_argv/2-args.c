#include <stdio.h>

/**
* main - prints all command ine arguments
* @argc: amount of command line arguments passed
* @argv: array of strings recording each command line argument
* Description: prints each comand line argument passed to program
* Return: always zero
*/

int main(int argc, char *argv[])
{
	(void)(argc);
while (*argv != 0)
printf("%s\n", *argv++);

return (0);
}

