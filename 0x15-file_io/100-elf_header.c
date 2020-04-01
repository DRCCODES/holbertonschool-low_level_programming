#include "holberton.h"

/**
 * main - display information of ELF file header
 * @argc: arguments
 * @argv: string arguments
 *
 * Return: at somepint exit 98
 */

int main(int argc, char *argv[])
{
	if (argc != 2)
		dprintf(STDERR_FILENO, "%s is of no use ", argv[0]), exit(98);

	exit(98);
}
