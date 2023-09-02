#include "main.h"
/**
 * _puts - writes string, followed by new line, to stdout
 * @str: String to write
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}
