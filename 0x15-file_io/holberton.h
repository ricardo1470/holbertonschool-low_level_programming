#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

int _putchar(char c);
/*prototype _putchar*/
ssize_t read_textfile(const char *filename, size_t letters);
/*unction that reads a text file and prints it to the POSIX standard output.*/

#endif /* HOLBERTON_H */
