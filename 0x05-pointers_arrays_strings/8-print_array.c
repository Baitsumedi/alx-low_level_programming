#include "main.h"
/**
 * print_array - a function to print elements of an array of intergers
 * it must be followed by a new line
 * @a:the array that must be printed
 * @n:the number of elements to print
 */
void print_array(int *a, int n)
{
int c;
for (c = 0 ; c < n; c++)
{
if (c == 0)
printf("%d", a[c]);
else printf("%d", a[c]'\n');
}
printf("\n");
}
