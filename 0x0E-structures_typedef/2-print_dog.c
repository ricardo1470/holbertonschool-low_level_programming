#include "dog.h"
#include <stdio.h>

/**
 * print_dog -  initializes a variable
 * @d: struct dog.
 *
 * Description: Longer description
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
	printf("Name: %s\nAge: %6f\nOwnwer: %s\n", d->name, d->age, d->owner);
	}
}
