#include "main.h"
#include <string.h>
/**
 * _strlen - return the length
 * @s: pointer
 * Return: 0
 */

int _strlen(char *s)
{
	int len;

	while(s[len])
		len++;
	
	return (len);
}
