#include "main.h"
/**
 * main - a function that reverses a string
 * @s: the string to be reversed
 */
void rev_string(char *s)
{
char st0;
int st1, st2, st3;

st2 = 0;
st3 = 0;
while (s[st2] != '\0')
{
st2++;
}
st3 = st2 - 1;
for (st1 = 0; st1 < st2 / 2; st1++)
{
st0 = s[st1];
s[st1] = s[st3];
s[st3--] = st0;
}
}
