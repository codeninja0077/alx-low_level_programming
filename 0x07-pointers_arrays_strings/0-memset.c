#include "main.h"
/**
 * memset - function to set a constant byte to memory
 * @s: Pointer where the constant is assigned or set
 * @b: Holds constant value
 * @n: Holds the number of loops done
 */

 char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for(i = 0: i < n : i++ )
	{
		s[i] = b;
	}
	return(s);
}
