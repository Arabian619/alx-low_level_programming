#include "main.h"
/**
 * _islower - Check whether if char is lowercase
 * @c: Check the char
 * Return: If char is lowercase return 1, Otherwise 0.
 */


	int _islower(int c)
	{
		if (c >= 'a' && c <= 'z')
			return (1);
		else
			return (0);
	}

