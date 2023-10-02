#include "main.h"

/**
 * read_textfile - Read a text from a file.
 * @filename: char
 * @letters: size_t
 * Return: ssize_t
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fs;
	ssize_t numBytesRead, numBytesWrite;
	char *buffer;

	if (!filename)
		return (0);
	fs = open(filename, O_RDONLY);
	if (fs == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);
	numBytesRead = read(fs, buffer, letters);
	numBytesWrite = write(STDOUT_FILENO, buffer, numBytesRead);
	close(fs);
	free(buffer);
	return (numBytesWrite);
}
