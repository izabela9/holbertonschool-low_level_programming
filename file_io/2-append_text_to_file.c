#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>
#include <unistd.h>
/**
 * append_text_to_file - function that appends text at the end
 * of a file
 * @filename: name of the file
 * @text_content: text to append
 * Return: 1 on success, else -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len;
	int n = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		len = strlen(text_content);
		n = write(fd, text_content, len);
	}
	if (n == -1)
		return (-1);
	return (1);
}
