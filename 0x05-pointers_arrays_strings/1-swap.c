#include "main.h"

/**
 *swap_int - saps two integers' values
 *@a: first integer
 *@b: second integer
 *return: returns nothing
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
