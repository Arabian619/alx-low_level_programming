#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: Text file being read
 * @letters: Number of letters to be read
 * Return: w - Number of bytes read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t fptr;
	ssize_t n;
	ssize_t t;

	fptr = open(filename, O_RDONLY);
	if (fptr == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	t = read(fptr, buff, letters);
	n = write(STDOUT_FILENO, buff, t);

	free(buff);
	close(fptr);
	return (n);
}
