#include <stdio.h>
#include "main.h"

/**
 * main - Writes the name of the program
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: returns 0 Always (Success)
 */

int main(int argc __attribute__((unused)), char *argv[])

{
	printf("%s\n", *argv);

	return (0);

}
