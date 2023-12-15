#include "shell.h"
/**
* _strchr - locates a character in a string
* @r: string to be checked
* @p: character to be located
*
* Return: returns pointer to first occurence of character
* or NULL if character not found
*/
char *_strchr(char *r, char p)
{
	while (*r)
	{
		if (*r == p)
			return (r);
		r++;
	}
	if (!p)
		return (r);
	return (NULL);
}
