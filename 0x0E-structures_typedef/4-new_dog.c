#include "dog.h"
#include <stdlib.h>
/**
 * _strlen - return the len of string *s
 * @s: a string.
 * Return: len of string.
 */
unsigned int _strlen(char *s)
{
	unsigned int len = 0;

	while (*(s + len))
		len++;
	return (len);
}
/**
 * _strcpy - copy string
 * @s: string to copy
 * @len: len of string to copy
 * Return: copy string.
 */
char *_strcpy(char *s, int len)
{
	char *new_s;
	int i = 0;

	new_s = malloc(sizeof(char) * (len + 1));
	if (!new_s)
		return (NULL);
	while (s[i])
	{
		new_s[i] = s[i];
		i++;
	}
	new_s[i] = s[i];
	return (new_s);
}
/**
  * new_dog - creates a new dog.
  *
  * @name: name.
  * @age: age.
  * @owner: owner.
  * Return: nothing.
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	char *cpy_name, *cpy_owner;

	d = malloc(sizeof(dog_t));
	if (!d)
		return (NULL);
	/* Copy strings */
	cpy_name = _strcpy(name, _strlen(name));
	cpy_owner = _strcpy(owner, _strlen(owner));
	/* If fail someone free and return NULL */
	if (!cpy_name || !cpy_owner)
	{	free(d);
		if (cpy_name)
			free(cpy_name);
		if (cpy_owner)
			free(cpy_owner);
		return (NULL);
	}
	/* Otherwise assing name and owner */
	d->name = cpy_name;
	d->age = age;
	d->owner = cpy_owner;
	return (d);
}
