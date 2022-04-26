#include "main.h"
#include <stdio.h>
/**
 * _puts - prints values on a newline
 * @str: char pointer
 * Return: void
 */

void _puts2(char *str)
{
	while (*str != '\0')
	{
		printf("%c \n", *str++);
	}
}
