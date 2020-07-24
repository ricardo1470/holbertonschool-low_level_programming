#include "lists.h"

/**
 * print_afert_main - before the main function is executed.
 * 
 * 
 **/
void print_afert_main(void) __attribute__((constructor));

void print_afert_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
