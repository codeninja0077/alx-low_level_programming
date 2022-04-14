#include "main.h"

/**
* _isalpha - check if is alphabet
* @c : character is value
* Return: value
*/
int _isalpha(int c)
{
	if (c >= 'A' && c <= 'Z' | c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
