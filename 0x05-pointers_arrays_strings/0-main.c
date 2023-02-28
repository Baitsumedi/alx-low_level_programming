include "main.h"
#include <stdio.h>

/**
 * main - check the code 
 *
 * Return: 0
 */
int main(void)
{
    int n;

    n = 402;
    puts("n=%d\n", n);
    reset_to_98(&n);
    puts("n=%d\n", n);
    return (0);
}
