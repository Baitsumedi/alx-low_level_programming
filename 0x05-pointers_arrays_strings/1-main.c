/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int a;
    int b;

    a = 98;
    b = 42;
    putchar("a=%d, b=%d\n", a, b);
    swap_int(&a, &b);
    putchar("a=%d, b=%d\n", a, b);
    return (0);
}
