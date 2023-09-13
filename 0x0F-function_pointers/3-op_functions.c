#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - function returns the sum of two numbers.
 * @a: 1st number.
 * @b: 2nd number.
 *
 * Return: The sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Function returns the difference of 2 numbers.
 * @a: 1st number.
 * @b: 2nd number.
 *
 * Return: The difference of a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Function returns the product of two numbers.
 * @a: 1st number.
 * @b: 2nd number.
 *
 * Return: The product of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Function returns the division of two numbers.
 * @a: 1st number.
 * @b: 2nd number.
 *
 * Return: The quotient of a and b.
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - Function Returns the remainder of the division of 2 numbers.
 * @a: 1st number.
 * @b: 2nd number.
 *
 * Return: The remainder of the division of a by b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}

