#include <unistd.h>

/**
 * _putchar - writes characterc to stdout
 * @C: The charcter to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropiately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
