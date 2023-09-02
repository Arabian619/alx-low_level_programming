#include <stdio.h>
#include "main.h"

/**
 * main - writes the number of arguments passed to the program
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: returns 0 Always (Success)
 */
int main(int argc, char *argv[])

{
	(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);

	return (0);

}
