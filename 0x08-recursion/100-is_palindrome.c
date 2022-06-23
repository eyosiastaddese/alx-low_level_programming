#include <stdio.h>
#include "main.h"
/**
 * _strlen_recursion - returns the legth of the a string
 *
 * @s: the string
 *
 * Return: length of the sring
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		s++;
		return (1 +  _strlen_recursion(s));
	}
	return (0);
}
/**
 * checker - wrapper function for is_palindrome
 *
 * @str: the string
 * @len: length of the string
 * @count: counter of recursion
 *
 * Return: 1 if the string is palindrome, else 0
 */
int checker(char *str, int len, int count)
{
	if (count >= len)
		return (1);
	if (str[len] == str[count])
		return (checker(str, len - 1, count + 1));
	return (0);
}
/**
 * is_palindrome - checks if the string is palindrome
 *
 * @s: string
 *
 * Return: 1 if string is palindrome, else 0
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);
	int count = 0;

	return (checker(s, len - 1, count));
}
