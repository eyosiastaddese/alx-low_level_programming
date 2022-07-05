#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal
 *
 * @n: the number of times the character \ should be printed
 *
 * Return: 0
 */
void print_diagonal(int n)
{
	int a;
	int b;

	if (n > 0)
	{
		for (a = 1; a <= n; a++)
		{
			for (b = 1; b <= n; b++)
			{
				if (a == b)
				{
					_putchar(92);
					break;
				}
				_putchar(' ');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
