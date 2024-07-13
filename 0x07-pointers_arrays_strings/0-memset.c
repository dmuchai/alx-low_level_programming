#include "main.h"

/**
 * *_memset - Fills memory with a constant byte
 * * @s: pointer to the memory area to be filled
 * @b: char- constant byte to fill the memory with
 * @n: unsigned int- number of bytes to be filled
 *
 *Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;

	for (index = 0; n > 0; index++)
	{
		s[index] = b;
		n -= 1;
	}
	return (s);
}
