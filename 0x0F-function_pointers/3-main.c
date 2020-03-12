#include "3-calc.h"
/**
  * main - main.
  * @argc: argument count.
  * @argv: argument values.
  * Return: 0.
  */
int main(int argc, char *argv[])
{
	int (*c)(int, int);
	int a, b, d;

	if (argc != 4)
	{
		printf("Error\n");
		exit(99);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	c = get_op_func(argv[2]);

	if (c == NULL)
	{
		printf("Error\n");
		exit(100);
	}
	d = c(a, b);
	printf("%d\n", d);
	return (0);
}
