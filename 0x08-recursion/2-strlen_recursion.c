#include "main.h"
/*
 * int _strlen_recursion(char *s) - returns the length of a string
 * @s: the string passed
 * Return: on success, length of string
 * on error, -1 is returned
 */

int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s)
	{
		length++;
		length += _strlen_recursion(s + 1);
	}

	return (length);
}
