#include "main.h"
/**
 * swap_int - Swaps values of two Integers.
 * @a: Integer to Swap
 * @b: Integer to Swap
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
