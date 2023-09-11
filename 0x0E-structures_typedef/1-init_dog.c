#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - initializes variable of type struct dog
 * @d: initializes pointer to struct dog
 * @name: initialize name
 * @age: initializes age
 * @owner: initializes owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
