/**
 * _memcpy -copies using pointers
 * @dest: where to copy to
 * @n: the size of the memory to print
 * @src: source to copy from
 * Return: Nothing.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
char *csrc = (char *)src;
char *cdest = (char *)dest;
for (i = 0; i < n ; i++)
cdest[i] = csrc[i];
return (dest);
}
