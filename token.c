#include "shell.h"

/**
* token - creates tokens from given input
* @zip: to be tokenized
*
* Return: array of strings
*/
char **token(char *zip)
{
	char *put = NULL, *read = NULL, *token = NULL, delim[] = {"\n "};
	char **tokenize = NULL;
	int red = 1;
	size_t blue = 0, flag = 0;

	put = _strdup(zip);
	if (!put)
		return (NULL);
	read = put;

	while (*read)
	{
		if (_strchr(delim, *read) != NULL && flag == 0)
		{
			red++;
			flag = 1;
		}
		else if (_strchr(delim, *read) == NULL && flag == 1)
			flag = 0;
		read++;
	}
	tokenize = malloc(sizeof(char *) * (red + 1));
	token = strtok(put, delim);
	while (token)
	{
		tokenize[blue] = _strdup(token);
		if (tokenize[blue] == NULL)
		{
			free(tokenize);
			return (NULL);
		}
		token = strtok(NULL, delim);
		blue++;
	}
	tokenize[blue] = '\0';
	free(put);
	return (tokenize);
}
