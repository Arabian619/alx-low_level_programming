#include "main.h"

/**
 * binary_to_uint - converts binary number to unsigned int
 * @b: string containing the binary number
 *
 * Return: converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int a;
	unsigned int conv_num = 0;

	if (!b)
		return (0);

	for (a = 0; b[a]; a++)
	{
		if (b[a] < '0' || b[a] > '1')
			return (0);
		conv_num = 2 * conv_num + (b[a] - '0');
	}

	return (conv_num);

}
