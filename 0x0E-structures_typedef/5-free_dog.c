#include "dog.h"
#include <stdlib.h>
/**
  * free_dog - print a character
  * @d: firts member
  * Description: Longer description
  */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
