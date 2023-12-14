#include "shell.h"

/**
 * _strcat - Concatenates two strings.
 * @destn: The destination string.
 * @srce: The source string.
 * Return: A pointer to the resulting string (destn).
 */
char *_strcat(char *destn, char *srce)
{
	int destn_len = 0;
	int srce_index = 0;

	while (destn[destn_len])
	{
		destn_len++;
	}

	while (srce[srce_index])
	{
		destn[destn_len] = srce[srce_index];
		srce_index++;
		destn_len++;
	}
	destn[destn_len] = '\0';

	return (destn);
}
