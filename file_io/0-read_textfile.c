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
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	int fd;
	ssize_t n;
	ssize_t c;

	buf = malloc(letters);
	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	n = read(fd, buf, letters);
	c = write(STDOUT_FILENO, buf, n);
	if (c == -1 || c != n)
	{
		close(fd);
		return (0);
	}
	close(fd);
	return (n);
}
