#include "3-calc.h"

/**
 * op_add - adds 2 nums
 * @a: 1st num
 * @b: 2nd num
 * Return: add
*/
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - substracts 2 nums
 * @a: 1st num
 * @b: 2nd num
 * Return: difference
*/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies 2 nums
 * @a: 1st num
 * @b: 2nd num
 * Return: multiplication
*/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides 2 nums
 * @a: 1st num
 * @b: 2nd num
 * Return: division
*/
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - calculate the module of 2 nums
 * @a: 1st num
 * @b: 2nd num
 * Return: remainder of division
*/
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
