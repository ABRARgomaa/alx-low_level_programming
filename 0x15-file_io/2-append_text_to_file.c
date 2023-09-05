#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include "main.h"
/**
 * append_text_to_file - good
 * @filename: good
 * @text_content: good
 * Return: (0)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor, write_result;

	if (filename == NULL)
		return (-1);
	file_descriptor = open(filename, O_WRONLY | O_APPEND);
	if (file_descriptor == -1)
		return (-1);

	if (text_content != NULL)
	{
		write_result = write(file_descriptor, text_content, strlen(text_content));
		if (write_result == -1)
		{
			close(file_descriptor);
			return (-1);
		}
	}

	close(file_descriptor);
	return (1);
}

