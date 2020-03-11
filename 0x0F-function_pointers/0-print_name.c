#include "function_pointers.h"
#include <stdlib.h>

/**
  * print_name - initializes a variable
  *
  * @name: name.
  * @f: pointer.
  * Return: nothing.
  */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
	{
		return;
	}
	if (f == NULL)
	{
		return;
	}
	f(name);
}
