#include "holberton.h"

/**
 * create_file - create a file with given name and content
 * @filename: The name of the file to create
 * @text_content: The content to place into the file
 * Return: 1 for success, -1 for failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd = 0;
	int i = 0;

	if (!filename)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	while (text_content[i] != '\0')
		i++;

	fd = open(filename, O_RDWR | O_CREAT, 0600);
	if (fd == -1)
		return (-1);
	write(fd, text_content, i);

	close(fd);
	return (1);
}
