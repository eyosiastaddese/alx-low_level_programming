#include <unistd.h>
/**
 * _putchar - writes the character c to so
 *
 * @c: character
 *
 * Return: 1 which is success, else -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
