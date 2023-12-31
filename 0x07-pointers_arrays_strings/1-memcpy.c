#include "main.h"
/**
 *_memcpy - The function copies memory area.
 *@dest: Where memory is stored
 *@src: Where memory is copied
 *@n: number of bytes
 *
 *Return: returns copied memory with n byted changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
