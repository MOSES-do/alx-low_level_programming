#include "main.h"
#include <stdlib.h>

/**
* createbuffer - function to create buffer length
* @length: buffer length
* Return: buffer
*/
char *createbuffer(size_t length)
{
	char *buffer;

	buffer = malloc(sizeof(char) * length);

	if (buffer == NULL)
		return (0);
	
	return (buffer);
}

/**
* read_textfile - function to print a string
* @filename: par that receives atring from man function
* @letters: length of string to be printed
* Return: 0 - on fialure;
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t o, rd, wr;

	if (filename == NULL)
		return (0);

	buffer = createbuffer(letters);

	o = open(filename, O_RDONLY);
	rd = read(o, buffer, letters);
	wr = write(1, buffer, rd);
	
	if (o == -1 || rd == -1 || wr == -1)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(o);

	return (wr);
}
