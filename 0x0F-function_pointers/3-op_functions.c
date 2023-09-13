#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
/**
 * op_add - sum of two
 * @a:frist intger
 * @b:sec intger
 * Return:sum of a+b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - substract of two
 * @a:frist int
 * @b:sec int
 * Return:a-b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - product of two
 * @a:frist int
 * @b:sec int
 * Return:a*b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divition of two
 * @a:frist int
 * @b:sec int
 * Return:a/b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - remender of divition of two
 * @a:frist int
 * @b:sec int
 * Return:a%b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
