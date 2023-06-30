#include "main.h"
#include <unuistd.h>
/**
*_putchar sends a character  to stdout
*@c: The character to be printed
*
*Return: 1 when done.
*error, return -1
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
