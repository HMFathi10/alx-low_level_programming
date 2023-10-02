#include "main.h"

/**
 * append_text_to_file - add text ot file.
 * @filename: char
 * @text_content: char
 * Return: int
 */

int main(int argc, char *argv[])
{
	char buffer[1024];
	int fdfrom, fdto;
	ssize_t numBytesRead, numBytesWrite;

	if (argc == 3)
		printf("argc 3");
	/*if (argc != 3)
	{
		printf("1");
		exit(97);
	}*/
	fdfrom = open(argv[1], O_RDONLY);
	/*if (fdfrom == -1)
	{
		printf("2");
		exit(98);
	}*/
	fdto = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	/*if (fdto == -1)
	{
		printf("3");
		exit(99);
	}*/
	numBytesRead = 1024;
	while (numBytesRead == 1024)
	{
		numBytesRead = read(fdfrom, buffer, 1024);
		numBytesWrite = write(fdto, buffer, numBytesRead);
		/*if (numBytesRead == -1 || numBytesWrite == -1)
			exit (98);*/
		if (numBytesWrite != -1)
			printf("Not equal -1");
	}
	close(fdfrom);
	close(fdto);

	return (0);
}
