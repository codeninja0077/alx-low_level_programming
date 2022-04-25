#include "main.h"
/**
 * _puts - prints values
 * @str: char pointer
 * Return: 1
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
