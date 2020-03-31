#include "holberton.h"

/**
 * read_textfile - reads txt file and prints to POSIX
 *
 * @filename: name of the file, taken a a str
 * @letters: number or letters to print
 *
 * Return: num actuall number of lettters it cold read and print or 0 if failed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	ssize_t num;

	if (filename == NULL)
		return (0);

	buf = malloc(sizeof(ssize_t) * letters);

	if (buf == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	num = read(fd, buf, letters);

	if (num == -1)
		return (0);

	buf[num] = '\0';

	write(STDOUT_FILENO, buf, num);

	close(fd);

	return (num);
}
