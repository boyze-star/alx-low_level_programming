#include "3-calc.h"

/**
 * op_add - Returns sum of two numbers
 * @a: first number
 * @b: second number
 *
 * Return: sum of a & b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Returns diff of two numbers
 * @a: first arg
 * @b: second arg
 *
 * Return: diff of a & b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Returns product of two numbers
 * @a: first arg
 * @b: second arg
 *
 * Return: product of a & b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Returns division of two numbers
 * @a: first arg
 * @b: second arg
 *
 * Return: quotient of a & b
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - Returns remainder of division of two numbers
 * @a: first arguement
 * @b: second arguement
 *
 * Return: remainder of division of a by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
