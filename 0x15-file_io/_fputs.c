#include "holberton.h"
#include <stdio.h>
#include <unistd.h>

/**  fputs(string,fp) -- put string to stream */

int fputs(const char *p, FILE *fp)
{
	write (fp->fd, p, strlen (p));
	return(0);
}
