#include "main.h"

/**
 * print_alphabet - alphabet with custom function
 *
 * Return: zero
 */

void print_alphabet(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		++ch;
	}
	_putchar('\n');
}
