#include "dog.h"

/**
 * init_dog - assigns variables to members of type struct dog.
 * @d: Created struct for a new dog.
 * @name: Name to be added to dog.
 * @age: Age to be added to dog.
 * @owner: Owner's name to be added to dog.
 *
 * Return: void.
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}

