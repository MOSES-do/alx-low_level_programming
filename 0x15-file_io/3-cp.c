#include "main.h"
#include <stdio.h>

#define BUFFER_SIZE 1024

/**
* close_file - terminate open sys call
* @fd: param for file descriptor
*/
void close_file(int fd)
{
	int fildes;

	fildes = close(fd);

	if (fildes == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
* createbuf - create buffer to hold text
* @newfile: file to receive buffer
* Return: buffer
*/
char *createbuf(char *newfile)
{
	char *buffer;

	buffer = malloc(sizeof(char) * BUFFER_SIZE);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", newfile);
		exit(99);
	}

	return (buffer);
}


/**
* main - copies contnent of one file to another
* @ac: number of args
* @argv: array of pointers to args
* Return: 0 on success
*/

int main(int ac, char **argv)
{
	char *buffer;
	int FD_VALUE, FROM, rd, wr;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = createbuf(argv[2]);
	FROM = open(argv[1], O_RDONLY);
	rd = read(FROM, buffer, BUFFER_SIZE);
	FD_VALUE = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (FROM == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		wr = write(FD_VALUE, buffer, rd);
		if (FD_VALUE == -1 || wr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		rd = read(FROM, buffer, 1024);
		FD_VALUE = open(argv[2], O_WRONLY | O_APPEND);
	} while (rd > 0);

	free(buffer);
	close_file(FROM);
	close_file(FD_VALUE);

	return (0);
}

