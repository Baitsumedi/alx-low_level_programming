#include "main.h"
/**
 * print_rev - prints a string in reverse(followed by a new line)
 * @s : the string to print
 */
void print_rev(char *s)
{
int a, b, c;
a = 0;
while (*s[i] != '\0')
{
i++;
c = i;
for (b = c - 1; b >= 0; b--)
{
_putchar(s[b]);
}
_putchar('\n');
}
