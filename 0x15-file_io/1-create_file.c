#include "main.h"

/**
 * create_file - create a file.
 * @filename: char
 * @text_content: char
 * Return: int
 */
int create_file(const char *filename, char *text_content)
{
	int fd, text_len = 0;
	ssize_t numBytesWrite;

	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT|O_WRONLY|O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (!text_content)
		text_content = "";
	for (; text_content[text_len]; text_len++)
		;
	numBytesWrite = write(fd, text_content, text_len);
	if (numBytesWrite == -1)
		return (-1);
	close(fd);
	return (1);
}
