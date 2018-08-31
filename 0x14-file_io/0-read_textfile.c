#include "holberton.h"

/**
 * read_textfile - reading and writing from a file
 * @filename: The file to be read
 * @letters: The number of characters that should be read
 * Return: Number of characters printed or 0 for failure
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd = 0;
	char *buf = NULL;
	ssize_t char_read = 0;
	ssize_t char_written = 0;

	buf = malloc(sizeof(char) * (letters));

	if (!letters)
		return (0);
	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	char_read = read(fd, buf, letters);
	if (!char_read)
		return (0);
	char_written = write(STDOUT_FILENO, buf, char_read);
	if (char_written == -1)
		return (0);
	close(fd);
	return (char_written);
}
