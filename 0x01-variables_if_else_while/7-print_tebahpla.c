#include <stdio.h>

/**
 * main - printing tebahpla
 *
 * Return: zero
 */

int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchr(ch);
		--ch;
	}
	putchar('\n');

	return (0);
}
