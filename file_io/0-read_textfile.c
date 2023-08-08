#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
/**
 * read_textfile - function that reads a text file and
 * prints it to the standard output
 * @filename: text file to read
 * @letters: number of letters to read
 * Return: number of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	int fd1;
	ssize_t n;
	ssize_t c;

	buf = malloc(letters);
	if (filename == NULL)
		return (0);

	fd1 = open(filename, O_RDONLY);
	n = read(fd1, buf, letters);
	c = write(STDOUT_FILENO, buf, n);
	if (c == -1 || c != n)
	{
		close(fd1);
		return (0);
	}
	close(fd1);
	return (n);
}
