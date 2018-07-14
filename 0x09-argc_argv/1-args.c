#include <stdio.h>

/**
* main - prints number of command line arguments
* @argc: amount of command line arguments passed
* @argv: array of strings recording each command line argument
* Description: prints number of command line arguments passed to program
* Return: always zero
*/

int main(int argc, __attribute__((unused)) char *argv[])
{
printf("%i\n", argc);

return (0);
}

