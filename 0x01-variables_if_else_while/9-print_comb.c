#include <stdio.h>

/**
 * main - Printing combos
 *
 * Return: zero
 */

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
		if (i == '9')
			break;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}
