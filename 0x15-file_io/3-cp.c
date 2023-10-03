#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <errno.h>
#include <stdarg.h>
/**
 * print_error_and_exit - function to print error and exit
 * @exit_code:int
 * @format:char
 * Return:void
 */

void print_error_and_exit(int exit_code, const char *format, ...)
{
	va_list args;

	va_start(args, format);

	dprintf(STDERR_FILENO, format, args);

	va_end(args);

	exit(exit_code);
}
/**
 * main - our main function
 * @argc:int
 * @argv:char
 * Return:0
 */
int main(int argc, char *argv[])
{
	const char *file_from = argv[1], *file_to = argv[2];
	char buffer[1024];
	ssize_t bytes_read, bytes_written;
	int fd_from, fd_to;

	if (argc != 3)
		print_error_and_exit(97, "Usage: cp file_from file_to\n");
	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
		print_error_and_exit(98, "Error: Can't read from file %s\n", file_from);
	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR |
			S_IWUSR | S_IRGRP | S_IROTH);
	if (fd_to == -1)
		print_error_and_exit(99, "Error: Can't write to file %s\n", file_to);
	while ((bytes_read = read(fd_from, buffer, sizeof(buffer))) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written != bytes_read)
			print_error_and_exit(99, "Error: Can't write to file %s\n", file_to);
	}
	if (bytes_read == -1)
		print_error_and_exit(98, "Error: Can't read from file %s\n", file_from);
	if (close(fd_from) == -1)
		print_error_and_exit(100, "Error: Can't close fd %d\n", fd_from);
	if (close(fd_to) == -1)
		print_error_and_exit(100, "Error: Can't close fd %d\n", fd_to);
	return (0);
}
