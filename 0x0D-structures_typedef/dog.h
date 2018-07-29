#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - Attributes of dog
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Owner of dog
 * Description: A structure holding values for aspects of a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
