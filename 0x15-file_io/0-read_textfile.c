#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: actual number of letters it could read and print
 * if the file can not be opened or read, return 0
 * if filename is NULL return 0
 * if write fails, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int *b;
	ssize_t of;
	ssize_t r;
	ssize_t rd;

	of = open(filename, O_RDONLY);
	if (of == -1)
		return (0);
	b = malloc(sizeof(int) * letters);
	rd = read(of, b, letters);
	r = write(STDOUT_FILENO, b, rd);

	free(b);
	close(of);
	return (r);
}
