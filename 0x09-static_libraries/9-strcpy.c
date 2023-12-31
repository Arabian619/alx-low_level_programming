#include "main.h"

/**
 * char *_strcpy - The function copies the string pointed to src
 * @dest: Copy to
 * @src: Copy from
 * Return: returns string
 */
char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int x = 0;

	while (*(src + l) != '\0')
	{
		l++;
	}
	for ( ; x < l ; x++)
	{
		dest[x] = src[x];
	}
	dest[l] = '\0';
	return (dest);
}
