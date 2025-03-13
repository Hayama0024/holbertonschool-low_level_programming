#include "dog.h"
#include <stdio.h>
/**
 * init_dog - Initializes a struct dog
 * @d: Pointer to struct dog
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 *
 * Description: This function initializes a struct dog
 * with the given name, age, and owner.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
