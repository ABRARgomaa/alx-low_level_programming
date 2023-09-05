#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"
/**
 * read_textfile - good
 * @filename: good
 * @letters: good
 * Return: (0)
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file_des, bytes_read, bytes_write;
	char *buffer;

	if (filename == NULL)
		return (0);
	file_des = open(filename, O_RDONLY);
	if (file_des == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(file_des);
		return (0);
	}
	bytes_read = read(file_des, buffer, letters);
	if (bytes_read == -1)
	{
		free(buffer);
		close(file_des);
		return (0);
	}
	bytes_write = write(STDOUT_FILENO, buffer, bytes_read);
	if (bytes_write == -1 || bytes_write != bytes_read)
	{
		free(buffer);
		close(file_des);
		return (0);
	}
	free(buffer);
	close(file_des);
	return (bytes_write);
}
