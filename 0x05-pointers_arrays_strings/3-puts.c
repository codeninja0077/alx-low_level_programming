#include "main.h"
#include <stdio.h>
/**
 * _puts - prints values
 * @str: char pointer
 * Return: void
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		printf("%c", *str++);
	}
	printf('\n')
}
