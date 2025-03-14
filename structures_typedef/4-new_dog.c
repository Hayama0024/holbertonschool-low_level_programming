#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - copies str in new memory
 * @str: stings
 *
 * Return: pointer or NULL
 */
char *_strdup(char *str)
{
	int i, len = 0;
	char *dup;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[len] != '\0')
		len++;

	dup = malloc(sizeof(char) * (len + 1));
			if (dup == NULL)
			{
			return (NULL);
			}

	for (i = 0; i <= len; i++)
	dup[i] = str[i];

	return (dup);
}

/**
 * new_dog - new structure
 * @name: dog's name
 * @age: age
 * @owner: owner
 *
 * Return: NULL or new pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));
			if (new_dog == NULL)
			{
			return (NULL);
			}

	new_dog->name = _strdup(name);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	new_dog->owner = _strdup(owner);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	new_dog->age = age;
	return (new_dog);
}
