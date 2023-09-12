#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - a function that initializes a var of type struct dog
 * @d: pointer to type struct poiting to struct dog
 * @name: char pointer to an element of the struct
 * @age: float value to an element of the struct
 * @owner: char pointer to an element
 *
 * Return: Void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
