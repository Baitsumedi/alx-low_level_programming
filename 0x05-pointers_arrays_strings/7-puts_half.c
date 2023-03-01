#include "main.h"
/**
 * puts_half - afunction that prints half of a string(secondhalf of a string)
 * it must be followed by a new line
 */
void puts_half(char *str)
{
int a, b, c;
a = 0;
while (str[a] != '\0')
{
a++;
}
if (a % 2 == 0)
{
for (c = a / 2; str[c] != '\0')
{
_putchar(str[c]);
}
else if (a % 2)
{
for (b = (a - 1) / 2; b < a)
{
_putchar.c(str[c + 1]);
}
}

}
_putchar('\n');

}
