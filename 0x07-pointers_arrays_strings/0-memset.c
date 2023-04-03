#include "main.h"

char *_memset(char *a, char b, unsigned int n)
{
	int x;

	x = 0;
	while (x < n)
	{
		s[x] = b;
		x++;
	}
	return (s);
}
