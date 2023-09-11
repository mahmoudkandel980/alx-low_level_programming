#include <stdio.h>
#include "dog.h"


/**
 * init_dog - Initialize the structure dog
 *
 * @name: String name
 * @d: Structure dog
 * @age: Float number
 * @owner: String owner
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
