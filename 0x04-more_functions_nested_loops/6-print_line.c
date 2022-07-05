#include "main.h"
/**
 * print_line - draws a straight line in the terminal
 *
 * @n: the number of times the character _ should be printed
 *
 * Return: void
 */
void print_line(int n)
{
	int a;

	if (n > 0)
	{
		for (a = 1; a <= n; a++)
		{
			_putchar(50);
		}
	}
	_putchar('\n');
}
