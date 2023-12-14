#include "shell.h"

/**
 * _strcmp - Compare two strings.
 * @str1: First string to compare.
 * @str2: Second string to compare.
 *
 * Return: An integer less than, equal to,
 * or greater than zero if str1 is found,
 * respectively, to be less than, to match, or be greater than str2.
 */
int _strcmp(char *str1, char *str2)
{
	int i;
	int j;

	i = 0;

	while (str1[i] && str2[i])
	{
		if (str1[i] != str2[i])
		{
			j = str1[i] - str2[i];
			return (j);
		}
		i++;
	}
	return (0);
}
