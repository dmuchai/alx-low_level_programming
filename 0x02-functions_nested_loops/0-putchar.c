/*
 * File: 0-putchar.c
 * Auth: Dennis M. Muchai
 */

#include "main.h"

/**
 * main - prints _putchar followed by a new line
 *
 * Return:return 0
 */
int main(void)
{
	char school[0] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(school[i]);
	}
	_putchar(10);
	return (0);
}
