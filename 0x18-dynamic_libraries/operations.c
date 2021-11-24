#include <stdio.h>

/**
 * add - returns addition
 * @a: int
 * @b: int
 *
 * Return: int a + b
 */
int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - returns subtraction
 * @a: int
 * @b: int
 *
 * Return: int a - b
 */
int sub(int a,int b)
{
	return (a - b);
}

/**
 * mul - returns multiplication
 * @a: int
 * @b: int
 *
 * Return: int a * b
 */
int mul(int a, int b)
{
	int res;

	res = a * b;
	return (res);
}

/**
 * div - returns division
 * @a: int
 * @b: int
 *
 * Return: int a / b
 */
int div(int a, int b)
{
	return (a / b);
}

/**
 * mod - returns modulo
 * @a: int
 * @b: int
 *
 * Return: int a % b
 */
int mod(int a, int b)
{
	return (a % b);
}
