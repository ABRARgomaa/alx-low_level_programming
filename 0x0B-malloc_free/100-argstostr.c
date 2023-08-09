#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * *argstostr - good
 * @ac: good
 * @av: good
 * Return: (0)
 */
char *argstostr(int ac, char **av)
{
	int total_length = 0;
	int i, j;
	char *result;
	int index = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			total_length++;
		}
		total_length++;
	}


	result = (char *)malloc(total_length + 1);
	if (result == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			result[index++] = av[i][j];
		}
		result[index++] = '\n';
	}

	result[index] = '\0';
	return (result);
}

