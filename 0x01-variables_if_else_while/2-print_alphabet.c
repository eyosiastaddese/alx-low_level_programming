#include <stdio.h>

/**
 * main - Printing alphabet
 *
 * Return: zero
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		++ch;
	}
	putchar('\n');

	return (0);
}
