#include "holberton.h"
#include <stdio.h>
#include <unistd.h>

/**  fputs(string,fp) -- put string to stream */

int _fputs(const char *p, int fp)
{
	write (1, p, strlen (p));
	return(0);
}
