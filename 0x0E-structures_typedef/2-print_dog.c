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
			printf("nil");
		}
		if (d->owner == NULL)
		{
			printf("nil");
		}	
	printf("dog name: %s dog age: %6f dog ownwer: %s \n", d->name, d->age, d->owner);
	}
}