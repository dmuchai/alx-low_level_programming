/*
 * File: positive_or_negative.c
 * Auth: Dennis M Muchai
 */
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * positive_or_negative -  Prints number checks if its positive, neg or zero
 * @i : integer
 * Return: Always 0.
 */
void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is zero\n", i);
}
