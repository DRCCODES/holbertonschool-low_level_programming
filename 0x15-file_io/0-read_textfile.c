#include "holberton.h"

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

	write(STDOUT_FILENO,buf,num);

	close(fd);

	return num;
}
