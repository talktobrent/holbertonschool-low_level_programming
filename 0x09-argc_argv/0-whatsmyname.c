#include <stdio.h>

/**
* main - prints name of program
* @argc: amount of command line arguments passed
* @argv: array of strings recording each command line argument
* Description: prints name of program (its own filename)
* Return: always zero
*/

int main(__attribute__((unused)) int argc, char *argv[])
{
printf("%s\n", *argv);

return (0);
}

