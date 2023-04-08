#include "main.h"

/**
 * _strstr - locates a substring
 * Owned By MoOka
 * @haystack: the longer string to seach
 * @needle: the first occurrence of the substring
 * Return: a pointer beg of substring or @NULL if its no found
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;

	if (needle[j] == '\0')
		return (haystack);
	while (haystack[i] != '\0')
	{
		while (haystack[i + j] == needle[j] && haystack[i + j] != '\0')
			j++;
		if (needle[j] == '\0')
			return (haystack + i);
		i++;
		j = 0;
	}
	return (0);
}

