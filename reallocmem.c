#include "shell.h"

/**
 * _realloc - Reallocate memory block with custom implementation.
 * @pt: Pointer to the memory previously allocated with malloc.
 * @old_size: Size of the old memory block in bytes.
 * @new_size: Size of the new memory block in bytes.
 *
 * Return: Pointer to the new memory block, or NULL on failure.
 */
void *_realloc(void *pt, unsigned int old_size, unsigned int new_size)
{
	void *new_pt;
	char *srce, *destn;
	unsigned int i;

	if (new_size == 0 && pt != NULL)
	{
		free(pt);
		return (NULL);
	}
	else if (!pt)
	{
		new_pt = malloc(new_size);
		if (new_pt == NULL)
			return (NULL);
		return (new_pt);
	}
	else if (new_size == old_size)
	{
		return (pt);
	}

	srce = pt;
	new_pt = (char *)malloc(sizeof(*srce) * new_size);
	if (new_pt == NULL)
	{
		free(pt);
		return (NULL);
	}
	destn = new_pt;

	for (i = 0; i < old_size && i < new_size; i++)
	{
		destn[i] = srce[i];
	}

	free(pt);
	return (new_pt);
}
