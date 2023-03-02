#include "main.h"

/**
 *_srtcat functio that concatenates two strings
 *This function appends the src string to the dest string
 *overwriting the terminating null byte (\0) at the end of dest, and then adds a terminating null byte
 *@*dest = input value
 *@*str input value
 */
char *_strcat(char *dest, char *str)
{
int a, b;
a = 0;
while (dest[a] != '\0')
{
a++;
}
j = 0;
while (str[b] != '\0')
{
dest[a] = str[b]
a++;
b++;
}
dest[a] = '\0';
return (dest);
}
