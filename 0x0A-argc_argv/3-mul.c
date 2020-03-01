#include <stdio.h>
#include <stdlib.h>

/**
 * main -  print name
 *@argc: int.
 *@argv: char.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i;
	int j;
	int k;
	int mult = 0;

	if (argc != 3)
	{
		printf("Error\n");
		return (0);
	}
	else if (argc == 3)
	{
		for (i = 0 ; i < argc ; i++)
		{
			if (i == 1)
			{
				j = atoi(argv[i]);
			}
			else if (i == 2)
			{
				k = atoi(argv[i]);
			}
		}
	mult = j * k;
	printf("%d\n", mult);
	}
	return (0);
}
