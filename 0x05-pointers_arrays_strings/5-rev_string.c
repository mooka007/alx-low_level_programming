#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */

void rev_string(char *s)
{
	char tmp;
	int i, x, y;

	x = 0;

	while (s[x] != '\0')
	{
		x++;
	}

	y = x - 1;

	for (i = 0; i < x / 2; i++)
	{
		tmp = s[i];
		s[i] = s[y];
		s[y--] = tmp;
	}
}
