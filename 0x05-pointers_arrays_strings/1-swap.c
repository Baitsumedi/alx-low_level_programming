#include "main.h"
/**
  * swap_int-swaps the values of two intergers
  * @a:first interger to be swaped
  * @b:second interger to be swaped
  */
void swap_int(int *a, int *b)
{
int c;
c = *a;
*a = *b;
*b = c;
}
