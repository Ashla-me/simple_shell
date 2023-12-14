#include "shell.h"

/**
 * _strncmp - Compare two strings up to a given number of characters.
 * @str1: First string to compare.
 * @str2: Second string to compare.
 * @n: Number of characters to compare.
 *
 * Return: 0 if strings are equal, 1 otherwise.
 */
int _strncmp(const char *str1, const char *str2, size_t n)
{
	size_t i;

	if (str1 == NULL)
		return (-1);

	for (i = 0; i < n && str2[i]; i++)
	{
		if (str1[i] != str2[i])
		{
			return (1);
		}
	}

	return (0);
}
