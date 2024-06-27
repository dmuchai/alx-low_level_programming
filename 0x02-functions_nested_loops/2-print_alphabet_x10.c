/*
 * File: 2-print_alphabet_x10.c
 * Auth: Dennis M. Muchai
 */

#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet in lowercase.
 * 2-print_alphabet_x10.c prints 10 times the alphabet in lowercase.
 * This function uses a nested loop to print the alphabet from 'a' to 'z'
 * 10 times, each time followed by a newline character.
 */
void print_alphabet_x10(void)
{
	int count = 0;
	char letter;

	while (count++ < 10)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		_putchar('\n');
	}
}
