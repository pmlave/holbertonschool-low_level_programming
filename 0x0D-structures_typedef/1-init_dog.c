#include "dog.h"
#include <stdio.h>
/**
 * init_dog - Initializing struct
 * @d:
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Owner of dog
 * Return: Void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL && name != NULL && owner != NULL && age >= 0)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
