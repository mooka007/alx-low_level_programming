#include "main.h"
#include <stdio.h>

/**
 * *_strchr - locates a character in a string
 * Author - MoOka
 * @s: string to search
 * @c: char to find
 * Return:  pointe to the first occurrence of the char
 */
char *_strchr(char *s, char c)
{
		int a;

		while (1)
		{
			a = *s++;
			if (a == c)
			{
				return (s - 1);
			}
			if (a == 0)
			{
				return (NULL);
			}
		}
}
