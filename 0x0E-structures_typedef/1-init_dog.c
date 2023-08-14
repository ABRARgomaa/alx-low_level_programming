#include <stdio.h>
#include "dog.h"
#include <string.h>
/**
 * init_dog - good
 * @d: good
 * @name: good
 * @age: good
 * @owner: good
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	strcpy(d->name, name);
	d->age = age;
	strcpy(d->owner, owner);
}

