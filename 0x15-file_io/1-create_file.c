#include "main.h"
/**
 * create_file - Create a function that creates a file.
 * @filename:file to create
 * @text_content:what we write in the file
 * Return:1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int op, write_file, length = 0;

	if (filename == NULL)
		return  (-1);
	if (text_content != NULL)
	{
		while (text_content[length])
			length++;
	}

	op = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	write_file = write(op, text_content, length);

	if (op == -1 || write_file == -1)
		return (-1);
	close(op);
	return (1);
}
