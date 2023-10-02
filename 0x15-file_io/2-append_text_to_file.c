#include "main.h"
/**
 * append_text_to_file - Write a function that appends
 * text at the end of a file.
 * @filename:file we eidit
 * @text_content:text
 * Return:1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int op, write_t, length = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[length])
			length++;
	}
	op = open(filename, O_WRONLY | O_APPEND);
	write_t = write(op, text_content, length);

	if (op == -1 || write_t)
		return (-1);

	close(op);
	return (1);
}
