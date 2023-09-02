#include "main.h"
/**
 * _memset - Block of memory with a specific value to be filled
 * @s: Fills starting address of memory
 * @b: Desired value
 * @n: Number of bytes to change
 *
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
