#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - Write a function that reads a text file
 * and prints it to the POSIX standard output.
 * @filename:text file
 * @letters:number of letters
 * Return:the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t read_t;
	ssize_t write_t;
	ssize_t op;
	char *buffer = malloc(sizeof(char) * letters);

	op = open(filename, O_RDONLY);
	if (op == -1)
		return (0);
	read_t = read(op, buffer, letters);
	write_t = write(STDOUT_FILENO, buffer, read_t);

	free(buffer);
	close(op);
	return (write_t);
}
