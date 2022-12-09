#ifndef FILE_DOG
#define FILE_DOG
/**
 * struct dog - Structure dog
 * @name: Pointer to dog's name
 * @age: Dog's age
 * @owner: POinter to dog's owner
 *
 * Description: struct dog is a structure that contains dog info
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);

#endif
