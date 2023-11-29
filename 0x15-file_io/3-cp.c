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

char *createbuf(char *newfile)
{
	char *buffer;

	buffer = malloc(sizeof(char) * BUFFER_SIZE);

	if (buffer == NULL)
	{
		dprintf(2, "Error: Can't write to %s\n", file_to);
		exit(99);
	}

	return (buffer);
}

/**
* cp_text_to_file - copies content from one file to another
* @file_from: file to copy
* @file_to: destination file from src
* Return: 0 on success
*/

int cp_text_to_file(const char *file_from, char *file_to)
{
	char *buffer;
	int FD_VALUE, FROM, rd, wr;

	buffer = createbuf(file_to);
	FROM = open(file_from, O_RDONLY);
	rd = read(FROM, buffer, BUFFER_SIZE);
	FD_VALUE = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	wr = write(FD_VALUE, buffer, rd);
	do {
		if (FROM == -1 || rd == -1)
		{
			dprintf(2, "Error: Can't read from file %s\n", file_from);
			free(buffer);
			exit(98);
		}

		if (FD_VALUE == -1 || wr == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", file_to);
			free(buffer);
			exit(99);
		}
		rd = read(FROM, buffer, 1024);
		FD_VALUE = open(file_to, O_WRONLY | O_APPEND);
	} while (rd > 0);

	rd = read(FROM, buffer, 1024);
	FD_VALUE = open(file_to, O_WRONLY | O_APPEND);

	free(buffer);
	close_file(FROM);
	close_file(FD_VALUE);
	return (0);
}


/**
* main - copies contnent of one file to another
* @ac: number of args
* @argv: array of pointers to args
* Return: 0 on success
*/

int main(int ac, char **argv)
{

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	cp_text_to_file(argv[1], argv[2]);

	return (0);
}
