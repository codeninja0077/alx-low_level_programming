#include "main.h"
#include <stdio.h>
/**
 * _puts2 - prints values on a newline
 * @str: char pointer
 * Return: void
 */

void _puts2(char *str)
{
	while (*str != '\0')
	{
		if (*str % 2 == 0)
		{
			printf("%c", *str++);
		}
		printf("\n");
	}
}
