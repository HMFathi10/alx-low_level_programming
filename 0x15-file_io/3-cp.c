#include "main.h"

/**
 * main - check the code.
 * @argc: number of arguments.
 * @argv: arguments vector.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	char buffer[1024];
	int fdfrom, fdto;
	ssize_t numBytesRead, numBytesWrite;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	fdfrom = open(argv[1], O_RDONLY);
	if (fdfrom == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fdto = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	if (fdto == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	numBytesRead = 1024;
	while (numBytesRead == 1024)
	{
		numBytesRead = read(fdfrom, buffer, 1024);
		if (numBytesRead == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		numBytesWrite = write(fdto, buffer, numBytesRead);
		if (numBytesWrite == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (close(fdfrom) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdfrom);
		exit(100);
	}
	if (close(fdto) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdto);
		exit(100);
	}
	return (0);
}
