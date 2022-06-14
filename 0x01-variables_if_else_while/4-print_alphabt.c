#include <stdio.h>

/**
 * main - printing alphabt
 *
 * Return: zero
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch == 'q' || ch == 'e')
			++ch;
		putchar(ch);
		++ch;
	}
	putchar('\n')

	return (0);
}
