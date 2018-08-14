#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include "holberton.h"

/**
  * read_textfile - reads text file and prints to standard output
  * @filename: file name
  * @letters: number of characters to read and print
  * Return: number of letters read and printed
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int readcheck, writecheck, file;
	char *buffer;

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		close(file);
		return (0);

	readcheck = read(file, buffer, letters);
	close(file);
	if (readcheck == -1)
		free(buffer);
		return (0);

	writecheck = write(STDOUT_FILENO, buffer, readcheck);
	if (writecheck != readcheck || writecheck == -1)
		free(buffer);
		return (0);

	free(buffer);
	return (writecheck);
}
