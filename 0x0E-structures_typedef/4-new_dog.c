#include "dog.h"
#include <stdlib.h>
int _strlen(char *str);
char *_strcopy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
 * _strlen - Finds the length of a string.
 * @str: The string to be measured.
 *
 * Return: The length of the string.
 */
int _strlen(char *str)
{
	int len = 0;

	while (*str++)
		len++;

	return (len);
}

/**
 * _strcopy - Copies a string pointed to by src, including the
 *            terminating null byte, to a buffer pointed to by dest.
 * @dest: The buffer storing the string copy.
 * @src: The source string.
 *
 * Return: The pointer to dest.
 */
char *_strcopy(char *dest, char *src)
{
	int index = 0;

	for (index = 0; src[index]; index++)
		dest[index] = src[index];

	dest[index] = '\0';

	return (dest);
}

/**
 * new_dog - a function that creates a new dog
 * @name: pointer to name of new_dog
 * @age: member of new_dog struct
 * @owner: pointer to owner of new_dog
 *
 * Return: pointer to new copy
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;
	char *new_name, *new_owner;

	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
		return (NULL);

	new_name = malloc(sizeof(*name) * (_strlen(name) + 1));
	if (new_name == NULL)
	{
		free(ptr);
		return (NULL);
	}
	new_owner = malloc(sizeof(*owner) * (_strlen(owner) + 1));
	if (new_owner == NULL)
	{
		free(new_name);
		free(ptr);
		return (NULL);
	}
	_strcopy(new_name, name);
	_strcopy(new_owner, owner);

	ptr->name = new_name;
	ptr->age = age;
	ptr->owner = new_owner;

	return (ptr);

}
