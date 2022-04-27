#include "main.h"
#include <stddef.h>
/**
 * _strchr - search for the first equal character in string
 * @s: Pointer
 * @c: constant/value being searched for
 * Return:first occurance of value (c) being searched for
 * @s: else return null
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		else (*s != c );
		{
			return (0);
		}
		s++;
	}
}
