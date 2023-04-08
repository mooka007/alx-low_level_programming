#include "main.h"


int _atoi(char *s)
{
	int i = 0;
	int nbr = 0;
	int sign = 1;

	while ((s[i] == '\t') || (s[i] == '\n') || (s[i] == '\r') || (s[i] == '\v') || (s[i] == ' ') || (s[i] == '\f'))
	{
		i++;
	}
	while (s[i] == '+' || s[i] == '-')
	{
		if (s[i] == '-')
		{
			sign = sign * -1;
		}
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		nbr = nbr * 10 + (s[i] - '0');
		i++;
	}
	nbr = sign * nbr;
	return (nbr);
}


