#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - check the code for Holberton School students
 *
 * @name: name of person
 * @f: print name as is and UPPERCASE
 *
 * Return: 0
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
