#include <stdlib.h>
#include "dog.h"

/**
 * *new_dog - creates a new dog struct
 * @name: Name to be added to dog.
 * @age: Age to be added to dog.
 * @owner: Owner's name to be added to dog.
 *
 * Return: constructed dog struct;
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *n_dog = malloc(sizeof(dog_t));

	n_dog->name = name;
	n_dog->age = age;
	n_dog->owner = owner;

	return (n_dog);
}
