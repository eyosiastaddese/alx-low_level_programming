#include <stdio.h>

/**
 * main - Printing alphABET
 *
 * Return: zero
 */

int main(void)
{
	char ch = 'a';
	char al = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		++ch;
	}
	while (al <= 'Z')
	{
		putchar(al);
		++al;
	}
	putchar('\n');

	return (0);
}
