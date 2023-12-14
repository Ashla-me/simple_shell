#include "shell.h"

/**
 * _strcpy - Copy a string from source to destination.
 * @destn: Destination buffer.
 * @srce: Source string.
 *
 * Return: Pointer to destination buffer.
 */
char *_strcpy(char *destn, char *srce)
{
	int length = 0;
	int i;

	/* Calculate the length of the source string */
	while (srce[length])
		length++;
	/* Copy characters from source to destination */
	for (i = 0; i < length; i++)
		destn[i] = srce[i];
	/* Null-terminate the destination string */
	destn[length] = '\0';

	return (destn);
}
