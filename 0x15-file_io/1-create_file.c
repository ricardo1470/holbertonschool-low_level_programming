#include "holberton.h"

/**
 * create_file - Entry point.
 * @filename:pointer value.
 * @text_content: size value,
 * Return: Always 0 (Success)
 */
int create_file(const char *filename, char *text_content)
{
	int i, j, k;

	k = 0;
	if (!filename)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		return (1);
	}
	i = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (i < 0)
	{
		return (-1);
	}
	while (text_content[k])
	{
		k++;
	}
	j = write(i, text_content, k);
	if (j < 0)
	{
		close(i);
		return (-1);
	}
	close(i);
	return (1);
}
