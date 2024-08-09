#include "main.h"

/**
 * get_bit - a fctn that returns a bit at a given index
 * @n: The unsigned long int
 * @index: The index of the bit
 * Return: The value of the bit.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int max = 0x01;

	max <<= index;
	if (max == 0)
		return (-1);

	if ((n & max))
		return (1);
	else
		return (0);
}
