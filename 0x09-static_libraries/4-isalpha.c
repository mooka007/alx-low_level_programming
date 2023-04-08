#include "main.h"

/**
 * _isalpha - check if the character is from english alphabet
 * @c : character to be checked
 * Return: 1 if the character is True, and 0 if the character is false
 */

int	_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

