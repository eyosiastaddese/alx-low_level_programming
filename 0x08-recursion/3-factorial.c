#include "main.h"

/**
 * factorial - returns a factorial of a given number
 *
 * @n: given number
 *
 * Return: -1 if n is less than 0,els factorial of the number
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n -1));
}
