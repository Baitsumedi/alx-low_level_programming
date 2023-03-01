#include "main.h"
/**
 * char *_strcpy - a function that copies the string pointed to by src
 * including the null byte to the buffer pointed to by dest
 *Return value: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
int a, b;
a = 0;
while (src[a] != '\0')
{
a++;
}
for (b = 0; b < a; b++)
{
dest[b] = src[b];
}
dest[b] = '\0';
return (dest);
}

