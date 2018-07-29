#include "dog.h"
#include <stdio.h>
/**
 * print_dog - Initializing struct
 * @d: Pointer to struct
 * Return: Void
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name)
			printf("Name: %s\n", d->name);
		else if (!d->name)
			printf("Name: (nil)\n");
		printf("Age: %f\n", d->age);
		if (d->owner)
			printf("Owner: %s\n", d->owner);
		else if (!d->owner)
			printf("Owner: (nil)\n");
	}
}
