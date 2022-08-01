#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * free_dog - free dog from memory
 * @d: struct to free
 * Return: 0
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	if (d->owner != NULL)
		free(d->owner);
	if (d->name != NULL)
		free(d->name);

	free(d);
}
