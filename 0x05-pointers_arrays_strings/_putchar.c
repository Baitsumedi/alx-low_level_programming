#include <unistd.h>

/**
* *_puchar -writes the character c to stdout
* * @c: Character to be printed

*   * Return: 1 on success

*     * Return -1 when thre is an error, and error number is set

*/

int _putchar(char c)
{
return (write(1, &c, 1));
}
