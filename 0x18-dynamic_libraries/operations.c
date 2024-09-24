/**
 * add - Adds two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: The sum of a and b
 */

int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - Subtracts the second integer from the first
 * @a: first integer
 * @b: second integer
 *
 * Return: The difference of a and b
 */

int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - Multiplies two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: The product of a and b
 */
int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - Divides the first integer by the second
 * @a: first integer
 * @b: second integer
 *
 * Return: The result of the division or 0 if b is 0
 */

int div(int a, int b)
{
	if (b == 0)
		return (0);
	return (a / b);
}

/**
 * mod - Calculates the remainder of the division
 * @a: first integer
 * @b: second integer
 *
 * Return: The remainder or 0 if b is 0
 */

int mod(int a, int b)
{
	if (b == 0)
		return (0);
	return (a % b);
}
