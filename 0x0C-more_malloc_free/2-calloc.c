#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *a;

	if (nmemb == 0 || size == 0)
		return (NULL);
	a = malloc(nmemb * size);
	if (a == NULL)
		return (NULL);
	a = 0;
	return (a);
}
