#include <stdio.h>

/**
 * main - printing base16
 *
 * Return: zero
 */

int main(void)
{
	char a = '0';

	while (a <= '9')
	{
		putchar(a);
		++a;
	}char ch = 'a';

	while (ch <= 'f')
	{
		putchar(ch);
		++ch;
	}
	putchar('\n');

	return (0);
}
