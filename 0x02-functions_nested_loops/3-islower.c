#include "main.h"

/**
 * _islower - check for lower case letter
 * @c : character to check the case
 * Return:0 or 1
 */

int _islower(int c)
{
	if (c >= 'z')
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
