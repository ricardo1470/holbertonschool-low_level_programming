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
int create_file(const char *filename, char *text_content);
/*function that creates a file.*/
int append_text_to_file(const char *filename, char *text_content);
/*function that appends text at the end of a file.*/
int main(int argc, char *argv[]);

#endif /* HOLBERTON_H */
