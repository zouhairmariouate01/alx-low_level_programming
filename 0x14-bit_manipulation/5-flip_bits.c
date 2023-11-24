#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * @n: The first number.
 * @m: The second number.
 *
 * Return: The number of bits to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int dif = n ^ m;
	unsigned int count = 0;

	while (dif > 0)
	{
		count += dif & 1;
		dif >>= 1;
	}

	return (count);
}
