#ifndef DOG_H_
#define DOG_H_


/**
 * struct dog - structure for dog
 * @name: name of dog.
 * @age: age of dog.
 * @owner: name of dog's owner
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/**
 * dog_t - typedef for struct dog
*/
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);


#endif
