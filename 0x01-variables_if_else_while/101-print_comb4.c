#include <stdio.h>

/**
 * main - Printing combo 4
 *
 * Return: zero
 */

int main(void)
{
	int i = 0;
	int a;
	int b;

	while (i <= 9)
	{
		a = 0;
		while (a <= 9)
		{
			b = 0;
			while (b <= 9)
			{
				if (i != a && i < a && a != b && a < b)
				{
					putchar(i + 48);
					putchar(a + 48);
					putchar(b + 48);

					if (i + a + b != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
				++b;
			}
			++a;
		}
		++i;
	}
	putchar('\n');

	return (0);
}
