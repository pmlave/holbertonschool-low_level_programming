#include "holberton.h"

/**
 * append_text_to_file - adding text to the end of a file
 * @filename: Name of the file to which we will append text
 * @text_content: Name of text to be appended
 * Return: 1 on success -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd = 0;
	int i = 0;
	ssize_t write_result = 0;

	if (text_content)
		while (!text_content[i])
			i++;
	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (!text_content)
		return (1);
	write_result = write(fd, text_content, i);
	if (write_result == -1)
		return (-1);
	close(fd);
	return (1);
}
