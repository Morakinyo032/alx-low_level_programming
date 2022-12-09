#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - Frees dogs
 * @d: pointer to the dog
 */
void free_dog(dog_t *d)
{
	free(d);
}
