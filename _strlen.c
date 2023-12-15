#include "shell.h"
/**
* _strlen - returns the length of a string
* @i: string passed
*
* Return: returns length of string passed
*/
int _strlen(char *i)
{
	int number = 0;

	while (*i != '\0')
	{
		number++;
		i++;
	}
	return (number);
}
