#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
  * main - copies text from one file to another file
  * @argc: number of arguments passed
  * @argv: array of arguments
  * Return: always 0
  */

int main(int argc, char *argv[])
{
	int from, to, readcheck, writecheck, test;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);

	from = open(argv[1], O_RDONLY);

	buffer = malloc(sizeof(char) * 1024);

	if (from > 0 && buffer != NULL && to > 0)
	{
		readcheck = read(from, buffer, 1024);
		if (readcheck > 0)
			writecheck = write(to, buffer, readcheck);

		while (readcheck == 1024 && writecheck != -1 && to != -1)
		{
			readcheck = read(from, buffer, 1024);
			if (readcheck > 0)
			{
				to = open(argv[2], O_WRONLY | O_APPEND);
				if (to != -1)
					writecheck = write(to, buffer, readcheck);
			}
		}
	}

	free(buffer);

	if (from == -1 || readcheck == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	if (to == -1 || buffer == NULL || writecheck == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	test = close(from);
	if (test == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", from);
		exit(100);
	}

	test = close(to);
	if (test == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", to);
		exit(100);
	}
	return (0);
}
