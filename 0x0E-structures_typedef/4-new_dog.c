#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - Creates a new dog
 * @name: Pointer to dog's name
 * @age: Dog's age
 * @owner: Dog's owner pointer
 * Return: Pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *s;

	if (name == NULL || owner == NULL)
		return (NULL);
	s = malloc(sizeof(dog_t));
	if (s == NULL)
		return (NULL);
	s->name = strdup(name);
	if (s->name == NULL)
	{
		free(s);
		return (NULL);
	}
	s->age = age;
	s->owner = strdup(owner);
	if (s->owner == NULL)
	{
		free(s->name);
		free(s);
		return (NULL);
	}
	return (s);
}
