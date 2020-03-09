#ifndef HOLBERTON_H
#define HOLBERTON_H
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
int _putchar(char c);/*prototype _putchar*/
void init_dog(struct dog *d, char *name, float age, char *owner);/*function that initialize a variable of type struct dog*/
#endif /* HOLBERTON_H */
