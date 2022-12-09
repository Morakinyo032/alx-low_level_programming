#include "dog.h"
#include <stdio.h>
/**
 * init_dog - Initiates a variable of type struct dog
 * @d: Pointer to the variable
 * @name: Pointer to the dog name
 * @age: Dog's age
 * @owner: Pointer to dog's owner
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
