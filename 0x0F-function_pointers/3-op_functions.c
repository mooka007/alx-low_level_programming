#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - sum of two numbers
 * Owned By MoOka
 * @a: first number
 * @b: second number
 * Return: the sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - difference of 2 numbers
 * Owned By MoOka
 * @a: first number
 * @b: sec number
 * Return: the differencee of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - the multiple of 2 numbers
 * Owned By MoOka
 * @a: first number
 * @b: second number
 * Return: a * b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division of two numbers
 * Owned By MoOka
 * @a: 1st number
 * @b: 2nd number
 * Return: the division of a / b
 */

int op_div(int a, int b)
{
	return (a / b);
}


/**
 * op_mod - modulo of 2 numbers
 * Owned By MoOka
 * @a: 1st number
 * @b: 2nd number
 * Return: modulo of a and b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
