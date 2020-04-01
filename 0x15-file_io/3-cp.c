#include "holberton.h"
#define ERRUSE ("Usage: cp file_from file_to\n")
#define ERREAD ("Error: Can't read from file %s\n")
#define ERRWRITE ("Error: Can't write to %s\n")
#define ERRCLOSE ("Error: Can't close fd %d\n")
/**
  * main - entry point, copy file
  * @argc: number of arguments
  * @argv: pointer to the str
  * Return: 0
  */
int main(int argc, char *argv[])
{
	int fd1, fd2, target;
	char buf[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, ERRUSE), exit(97);
	fd1 = open(argv[1], O_RDONLY);
	if (fd1 == -1)
		dprintf(STDERR_FILENO, ERREAD, argv[1]), exit(98);
	fd2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd2 == -1)
		dprintf(STDERR_FILENO, ERRWRITE, argv[2]), exit(99);
	while ((target = read(fd1, buf, 1024)) > 0)
	{
		if (target == -1)
		{
		dprintf(STDERR_FILENO, ERREAD, argv[1]), exit(98);
		}
		target = write(fd2, buf, target);
		if (target == -1)
		{
		dprintf(STDERR_FILENO, ERRWRITE, argv[2]), exit(99);
		}
	}
	if (target == -1)
	{
		dprintf(STDERR_FILENO, ERREAD, argv[1]), exit(98);
	}
	if (close(fd1) == -1)
	{
		dprintf(STDERR_FILENO, ERRCLOSE, fd1), exit(100);
	}
	if (close(fd2) == -1)
	{
		dprintf(STDERR_FILENO, ERRCLOSE, fd2), exit(100);
	}
	return (0);
}
