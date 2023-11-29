#include "main.h"

char *create_buff(char *file);
void close_file(int fd);

/**
 * create_buff - Allocates 1024 bytes for a buffer.
 * @file: The name of the file buffer is storing chars for.
 *
 * Return: A pointer to the newly-allocated buffer.
 */
char *create_buff(char *file)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);

	if (buff == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buff);
}

/**
 * close_file - Closes file descriptors.
 * @fd: The file descriptor to be closed.
 */
void close_file(int fd)
{
	int c;

	c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copies the contents of a file to another file.
 * @ac: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 * Return: 0 on success.
 */
int main(int ac, char **argv)
{
	int FROM, FD_VALUE, rd, w;
	char *buffe;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffe = create_buff(argv[2]);
	FROM = open(argv[1], O_RDONLY);
	rd = read(FROM, buffe, 1024);
	FD_VALUE = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (FROM == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffe);
			exit(98);
		}

		w = write(FD_VALUE, buffe, rd);
		if (FD_VALUE == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffe);
			exit(99);
		}

		rd = read(FROM, buffe, 1024);
		FD_VALUE = open(argv[2], O_WRONLY | O_APPEND);

	} while (rd > 0);

	free(buffe);
	close_file(FROM);
	close_file(FD_VALUE);

	return (0);
}
