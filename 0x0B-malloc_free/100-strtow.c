#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * word_len - get len of word
 * @s: the str to find word len of
 *
 * Return: word len.
 */
int word_len(char *s)
{
int wl = 0;

while (*(s + wl) != ' ' && *(s + wl) != '\0')
wl++;
return (wl);
}
/**
 * word_count - free up grid memory
 * @str: the str to count words in
 *
 * Return: word count.
 */
int word_count(char *str)
{
int i = 0;
int count = 0;
char *k = str;

while (str[i] != '\0')
{
if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
{
count++;
}
i++;
}
return (count);
}
/**
 * strtow - segment into words like strtok
 * @str: the string to word
 *
 * Return: words
 */
char **strtow(char *str)
{
int size = 0;
int c;
int k;
int i;
int j;
int x;
int l;

char **w;
c = word_count(str);
if (str == NULL || str[0] == '\0')
return (NULL);

if (c == 0)
return (NULL);
w = malloc(sizeof(char *) * (c + 1));
if (w == NULL)
return (NULL);
i = 0;
j = 0;
while (str[i] != '\0')
{
while (str[i] != ' ' && str[i] != '\0')
{
i++;
}
if (str[i] == '\0')
{
w[j] == NULL;
return (w);
}
w = malloc(sizeof(char) * word_len(str + i) + 1);
if (w[j] == NULL)
{
for (k = j - 1; k > 1; k++)
free(w[k]);
free(w);
return (w);
}
l = word_len(str + i);
for (x = 0; x < l && str[i] != '\0'; x++, i++)
w[j][x] = str[i];
w[j][x] = '\0';
j++;
}
return (w);

}
