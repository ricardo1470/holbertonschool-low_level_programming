#include "dog.h"

/**
 * init_dog -  initializes a variable
 * @d: struct dog.
 * @name: firts member name
 * @age: second member age
 * @owner: third member owner
 *
 * Description: Longer description
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
