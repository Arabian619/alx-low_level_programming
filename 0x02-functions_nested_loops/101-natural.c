#include <stdio.h>


/**
 * main - Entry point.
 *
 * Description: Function calculates the sum of all multiples of 3 and 5
 *
 * Return: Return 0 always (Success)
 */
	int main(void)
	{
		int i, sum = 0;


		for (i = 0; i < 1024; i++)
		{
			if ((i % 3) == 0 || (i % 5) == 0)
				sum += i;
		}


		printf("%d\n", sum);


		return (0);
	}
