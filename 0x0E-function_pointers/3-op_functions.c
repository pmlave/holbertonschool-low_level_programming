#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * op_add - add 2 integers
 * @a: First number
 * @b: Second number
 * Return: Integer that is result of calculation
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Subtract b from a
 * @a: First number
 * @b: Second number
 * Return: Integer that is result of calculation
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiply 2 integers
 * @a: First number
 * @b: Second number
 * Return: Integer that is result of calculation
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divide a by b
 * @a: First number
 * @b: Second number
 * Return: Integer that is result of calculation
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - remainder of division of a by b
 * @a: First number
 * @b: Second number
 * Return: Integer that is result of calculation
 */
int op_mod(int a, int b)
{
	return (a % b);
}
