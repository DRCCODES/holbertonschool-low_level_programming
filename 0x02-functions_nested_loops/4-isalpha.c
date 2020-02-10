#include <unistd.h>

/**
 * _isalpha - checks is alphebetic 1 if so, 0 if not.
 * @c: Character to judge
 *
 * Return: On success 1.
 */

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		_putchar('1');
	else if (c >= 65 && c <= 90)
		_putchar('1');
	else
		_putchar('0');
}
