#include "shell.h"

/**
 * _strdup - Duplicate a string.
 * @str: String to duplicate.
 *
 * Return: Pointer to the duplicated string or NULL if memory allocation fails.
 */
char *_strdup(char *str)
{
	char *duplicates;
	size_t length;

	length = _strlen(str) + 1;
	duplicates = malloc(sizeof(char) * length);

	if (duplicates != NULL)
	{
		_strcpy(duplicates, str);
	}

	return (duplicates);
}
