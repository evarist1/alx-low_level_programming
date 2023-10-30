#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: is a NULL terminated string to file
 * Return: 1 on success, -1 if the function fails
 */
int create_file(const char *filename, char *text_content)
{
	int of, r, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	of = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	r = write(of, text_content, length);

	if (of == -1 || r == -1)
		return (-1);

	close(of);

	return (1);
}
