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
	ssize_t c;
	ssize_t n;

	buf = malloc(letters);
	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	c = read(fd, buf, letters);
	n = write(STDOUT_FILENO, buf, c);
	if (c == -1 || c != n)
	{
		close(fd);
		return(0);
	}
	close(fd);
	return (c);
}
