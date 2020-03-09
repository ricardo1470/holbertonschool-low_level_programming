#include "dog.h"
#include <stdio.h>

/**
 * print_dog -  initializes a variable
 * @d: struct dog.
 *
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name == NULL)
		{
			d->name = "(nil)";
		}
		if (d->owner == NULL)
		{
			d->owner = "(nil)";
		}
		printf("Name: %s\nAge: %f\nOwnwer: %s\n", d->name, d->age, d->owner);
	}
}
