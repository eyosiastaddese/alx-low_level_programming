#include "main.h"
/**
 * _isdigit - checks a digit 0 through 9
 *
 * @c: variable
 *
 * Return: 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
