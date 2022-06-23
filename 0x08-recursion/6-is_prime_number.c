#include "main.h"

/**
 * is_prime - wrapper function to check for prime
 *
 * @n: number
 * @i: factor to check is n is prime
 *
 * Return: 1 is ptime, else  0
 */
int is_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0)
		return (0);
	return (is_prime(n, i - 1));
}
/**
 * is_prime_number - checks the integer prime or not
 *
 * @n: number
 *
 * Return: 1 if the input integer is a prime, else 0
 */
int is_prime_number(int n)
{
	if (n < 3)
		return (0);
	return (is_prime(n, n - 1));
}
