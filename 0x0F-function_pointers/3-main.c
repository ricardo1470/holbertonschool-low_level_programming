#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * main - main.
  * @argc: argument count.
  * @argv: argument values.
  * Return: 0.
  */
int main(int argc, char *argv[])
{
	int num1, num2, result;
	int (*skrt)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]),
	num2 = atoi(argv[3]);

	skrt = get_op_func(argv[2]);
	if (skrt == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	result = skrt(num1, num2);
	printf("%d\n", result);

	return (0);
}
