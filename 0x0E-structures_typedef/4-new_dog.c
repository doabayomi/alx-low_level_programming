#include <stdlib.h>
#include <string.h>
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

	if (name == NULL || !(age < 0) || owner == NULL)
		return (NULL);

	if (n_dog == NULL)
		return (NULL);

	n_dog->name = malloc((strlen(name) + 1) * sizeof(char));
	if (n_dog->name == NULL)
		return (NULL);
	n_dog->name = strcpy(n_dog->name, name);

	n_dog->owner = malloc((strlen(owner) + 1) * sizeof(char));
	if (n_dog->owner == NULL)
		return (NULL);
	n_dog->owner = strcpy(n_dog->owner, owner);

	n_dog->age = age;
	return (n_dog);
}
