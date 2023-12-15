#include "shell.h"
/**
* _strdup - dupicates string
* @t: to be duplicated
*
* Return: pointer to duplicate string
*/
char *_strdup(char *t)
{
	char *mrt;
	int j, fin;

	if (t == NULL)
		return (NULL);

	fin = _strlen(t);

	mrt = malloc(sizeof(char) * (fin + 1));
	if (!mrt)
		return (NULL);
	for (j = 0; *t != '\0'; t++, j++)
		mrt[j] = t[0];

	mrt[j++] = '\0';
	return (mrt);
}
