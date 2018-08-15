#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include "holberton.h"

/**
  * append_text_to_file - appends text to a file
  * @filename: file name
  * @text_content: string of content to append to file
  * Return: 1 if success, -1 if fails
  */

int append_text_to_file(const char *filename, char *text_content)
{
	int writecheck, file;
	size_t count;

	count = 0;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
		return (-1);

	if (text_content == NULL)
		return (1);

	while (text_content[count] != 0)
		count++;

	writecheck = write(file, text_content, count);
	if (writecheck == -1)
	{
		close(file);
		return (-1);
	}

	close(file);
	return (1);
}
