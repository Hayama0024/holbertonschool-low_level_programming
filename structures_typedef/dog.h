#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Structure to store dog information
 * @name: The name of the dog (string)
 * @age: The age of the dog (float)
 * @owner: The owner's name (string)
 *
 * Description: This structure stores basic information about a dog,
 * including its name, age, and owner's name.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;

void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif
