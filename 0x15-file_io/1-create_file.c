#include "holberton.h"

/**
 * create_file - Entry point.
 * @filename:pointer value.
 * @text_content: size value,
 * Return: Always 0 (Success)
 */
int create_file(const char *filename, char *text_content)
{
	int i, j, k = 0;

	if (!filename)
	{
		return (-1);
	}
	i = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (k == -1)
	{
		return (-1);
	}
	if (text_content)
	{
		while (text_content[k] != '\0')
		{
			k++;
		}
		j = write(i, text_content, k);
	}
	if (j == -1 || j != k)
	{
		close(i);
		return (-1);
	}
	close(i);
	return (1);
}
