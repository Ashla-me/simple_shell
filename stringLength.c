#include "shell.h"

/**
 * _strlen - Calculate the length of a string.
 * @str: Pointer to the string.
 *
 * Return: Length of the string.
 */
int _strlen(char *str)
{
	int length = 0;

	while (str[length])
		length++;

	return (length);
}
