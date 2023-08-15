#include <stdio.h>
#include "dog.h"
#include <string.h>
#include <stdlib.h>
/**
 * *new_dog - good
 * @name: good
 * @age: good
 * @owner: good
 * Return: (0)
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *a;

	a = malloc(sizeof(dog_t));
	if (a == NULL)
		return (NULL);
	a->name = strdup(name);
	if (name == NULL)
	{
		free(a);
		return (NULL);
	}
	a->age = age;
	a->owner = strdup(owner);
	if (owner == NULL)
	{
		free(a);
		return (NULL);
	}
	return (a);
}

