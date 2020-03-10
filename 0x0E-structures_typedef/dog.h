#ifndef DOG_H
#define DOG_H
typedef struct dog dog_t;

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

/*function that initialize a variable of type struct dog*/
/**
  * init_dog - print a character
  * @d: character.
  *@name: char
  *@age: int
  *@owner: char
  * Return: c
  */
void init_dog(struct dog *d, char *name, float age, char *owner);
/*function that initialize a variable of type struct dog*/
/**
  * print_dog - print a character
  * @d: character.
  * Return: c
  */
void print_dog(struct dog *d);/*function that prints a struct dog*/

/**
  * new_dog - print a character
  * @name: firts member
  * @age: second member
  * @owner: third member
  * Description: Longer description
  *Return: Always 0.
  */
dog_t *new_dog(char *name, float age, char *owner);

/**
  * free_dog - print a character
  * @d: firts member
  * Description: Longer description
  */
void free_dog(dog_t *d);

#endif /* HOLBERTON_H */
