#include "main.h"
/**
 * _puts_recursion - prints string characters to std out recursively
 * 's' - input string
 * 's': input string
 * @s - input string
 * @s: input string
 * Return: Always 0 (Success)
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		_putchar('\n');
}
