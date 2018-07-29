#include "dog.h"
#include <stdio.h>
/**
 * print_dog - Initializing struct
 * @d: Pointer to struct
 * Return: Void
 */
void print_dog(struct dog *d)
{
	if (d->name)
		printf("Name: %s\n", d->name);
	else if (!d->name)
		printf("Name: (nil)");
	if (d->age)
	printf("Age: %f\n", d->age);
	else if (!d->age)
		printf("Age: (nil)");
	if (d->owner)
		printf("Owner: %s\n", d->owner);
	else if (!d->owner)
		printf("Owner: (nil)");
}
