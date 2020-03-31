#include "holberton.h"

/**
  * _fputs - recreation of fputs
  * @p: part of str to push
  * @fp: size of fp
  * Return: 0
  */

int _fputs(const char *p, int fp)
{
	write(fp, p, strlen(p));
	return (0);
}

/**
 * append_text_to_file - appened content to end of file
 * @filename: name of file
 * @text_content: content to parse into file
 * Return: 1 or  -1 if fails
 */


int append_text_to_file(const char *filename, char *text_content)
{
	int fptr;

	if (filename == NULL)
		return (-1);

	fptr = open(filename, O_WRONLY | O_APPEND);

	if (fptr == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(fptr);
		return (1);
	}

	_fputs(text_content, fptr);

	close(fptr);

	return (1);
}
