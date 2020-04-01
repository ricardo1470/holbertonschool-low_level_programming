#include "holberton.h"

/**
 * read_textfile - Entry point.
 * @filename:pointer value.
 * @letters: size value,
 * Return: Always 0 (Success)
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int i, j, k;
	char *buffer;

	buffer = malloc(sizeof(buffer) * letters);
	if (buffer == NULL || filename == NULL)
		return (0);

	i = open(filename, O_RDONLY);
	if (i == -1)
	{
		free(buffer);
		return (0);
	}

	j = read(i, buffer, letters);
	if (j == -1)
	{
		free(buffer);
		close(i);
		return (0);
	}

	k = write(STDOUT_FILENO, buffer, j);
	if (k == -1)
	{
		free(buffer);
		close(i);
		return (0);
	}
	free(buffer);
	close(i);
	return (k);
}
