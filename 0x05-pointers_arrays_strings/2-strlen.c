#include "main.h"
#include <string.h>
/**
 * _strlen - return the length
 * @s: pointer
 * Return: 0
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len])
		len++;
	return (len);
}
