#include "main.h"

/**
 * get_bit - Returns value of bit at an index in decimal number
 * @n: Number to search
 * @index: Index of the bit
 *
 * Return: Value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_num;

	if (index > 63)
		return (-1);

	bit_num = (n >> index) & 1;

	return (bit_num);
}
