#include "main.h"
/**
 * swap_int - swapping interger
 * @a:pointer
 * @b:pointer
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int t;

	t = *a;

	*a = *b;

	*b = t;
}
