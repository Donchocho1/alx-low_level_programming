#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - a function that frees the mem alloacted to a struct
 * @d: pointer to the struct
 *
 * Return: Void
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}
	free(d->name);
	free(d->owner);
	free(d);
}
