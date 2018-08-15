#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include "holberton.h"

/**
  * create_file - creates a file
  * @filename: file name
  * @text_content: string of content to put in file
  * Return: 1 if success, -1 if fails
  */

int create_file(const char *filename, char *text_content)
{
	int writecheck, file;
	size_t count;

	count = 0;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (file == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(file);
		return (1);
	}

	while (text_content[count] != 0)
	{
		count++;
	}

	writecheck = write(file, text_content, count);
	if (writecheck == -1)
	{
		close(file);
		return (-1);
	}

	close(file);
	return (1);
}
