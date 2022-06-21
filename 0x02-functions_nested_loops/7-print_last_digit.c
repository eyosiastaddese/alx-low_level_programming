#include "main.h"

/**
 * print_last_digit - prins the last digit
 *
 * @n: to be computed
 *
 * Return: the value of the last digit
 */

int print_last_digit(int n)
{
	int ch;

	ch = n % 10;
	if (ch < 0)
	{
		ch *= -1;
	}
	_putchar('0' + ch);
	return (ch);
}
