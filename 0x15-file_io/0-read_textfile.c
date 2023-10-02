#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to read
 *
 * Return: 0 if the file can not be opened or read, 0 if filename
 * is NULL, and 0 if write fails or does not write the expected amount
 * of bytes.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fn;
	ssize_t v;
	ssize_t t;

	fn = open(filename, O_RDONLY);
	if (fn == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fn, buf, letters);
	v = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fn);
	return (v);
}
