#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Short description
 * @name: firts member
 * @age: second member
 * @owner: third member
 *
 * Description: Longer description
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
  * _putchar - print a character
  * @c: character.
  * Return: c
  */
int _putchar(char c); /*prototype _putchar*/
void init_dog(struct dog *d, char *name, float age, char *owner);
/*function that initialize a variable of type struct dog*/
/**
  * print_dog - print a character
  * @d: character.
  * Return: c
  */
void print_dog(struct dog *d);/*function that prints a struct dog*/

#endif /* HOLBERTON_H */
