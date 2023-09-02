#include <stdio.h>
#include "main.h"

/**
 * main - Writes all arguments it receives
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: returns 0 Always (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
