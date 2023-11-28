#include "main.h"

/**
* append_text_to_file - writes text to end of a file
* @filename: name of source file
* @text_content: string to be appended
* Return: 1 on success, -1 on failure
*/


int append_text_to_file(const char *filename, char *text_content)
{
	int len = 0, fd, wr;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
		len = strlen(text_content);

	fd = open(filename, O_WRONLY | O_APPEND);
	wr = write(fd, text_content, len);

	if (fd == -1 || wr == -1)
		return (-1);

	close(fd);

	return (1);
}
