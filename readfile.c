#include "shell.h"

/**
 * _read - Reads file
 * @filename: the file name
 * @argv: vector
 * Return: success
 */
void _read(char *filename, __attribute__((unused)) char **argv)
{
	FILE *ptr;
	char *store = NULL;
	size_t len = 0;

	ptr = fopen(filename, "r");
	if (ptr == NULL)
	{
		exit(EXIT_FAILURE);
	}

	while ((getline(&store, &len, ptr)) != -1)
	{

		execute_file(store, ptr);

	}

	if (store)
	{
		free(store);
	}

	fclose(ptr);
	exit(0);
}
