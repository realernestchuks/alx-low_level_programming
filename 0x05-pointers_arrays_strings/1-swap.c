#include "main.h"
/**
 * 1-swap.c -  this function swaps the value of integers
 * @a: integer to swap
 * @b: integer to swap
 * swap_int: the function being used
 * Written by Ernest Chuks
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
