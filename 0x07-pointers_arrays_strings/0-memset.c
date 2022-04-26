#include "main.h"

/**
 * _memset - function to set a constant byte to memory
 * @s: Pointer where the constant is assigned or set
 * @b: Holds constant value
 * @n: Holds the number of loops done
 * Return:*s Pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	for (unsigned int i = 0; i < n ; i++)
	{
		s[i] = b;
	}
	return (s);
}
