#include "main.h"
/**
 * _puts_recursion - function like puts();
 * @s: pointer to string 
 * Return: void 
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar ('\n');
	}
	else
	{
		putchar(*s);
		_puts_recursion(s + 1);
	}
}
