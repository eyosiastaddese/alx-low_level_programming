#include <stdio.h>

/**
 * main - Printing combo 3
 *
 * Return: zero
 */

int main(void)
{
	int i = 0;
	int a;

	while (i <= 9)
	{
		a = 0;
		while (a <= 9)
		{
			if (i != a && i < a)
			{
				putchar(i + 48);
				putchar(a + 48);

				if (i + a != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			++a;
		}
		++i;
	}
	putchar('\n');

	return (0);
}
