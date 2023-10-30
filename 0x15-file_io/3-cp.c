#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>

#define BUFFER_SIZE 1024

void error_and_exit(int code, const char *format, const char *file_name) {
    dprintf(STDERR_FILENO, format, file_name);
    exit(code);
}

int main(int argc, char *argv[]) {

    if (argc != 3) {
        error_and_exit(97, "Usage: cp file_from file_to\n");
    }

    const char *file_from = argv[1];
    const char *file_to = argv[2];

    int fd_from = open(file_from, O_RDONLY);
    if (fd_from == -1) {
        error_and_exit(98, "Error: Can't read from file %s\n", file_from);
    }

    int fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
    if (fd_to == -1) {
        error_and_exit(99, "Error: Can't write to file %s\n", file_to);
    }

    char buffer[BUFFER_SIZE];
    ssize_t bytes_read, bytes_written;

    while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0) {
        bytes_written = write(fd_to, buffer, bytes_read);
        if (bytes_written == -1) {
            error_and_exit(99, "Error: Can't write to file %s\n", file_to);
        }
    }

    if (bytes_read == -1) {
        error_and_exit(98, "Error: Can't read from file %s\n", file_from);
    }

    if (close(fd_from) == -1) {
        error_and_exit(100, "Error: Can't close fd %d\n", fd_from);
    }

    if (close(fd_to) == -1) {
        error_and_exit(100, "Error: Can't close fd %d\n", fd_to);
    }

    return 0;
}
