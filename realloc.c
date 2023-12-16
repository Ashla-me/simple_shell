#include "shell.h"
/**
 * realloc_mem - reallocates a block of memory
 * @mrt: pointer to previous malloc'ated block
 * @1_size: byte size of previous block
 * @2_size: byte size of new block
 *
 * Return: pointer to the old block.
 */
void *realloc_mem(void *mrt, unsigned int 1_size, unsigned int 2_size)
{
	char *a;

	if (!mrt)
		return (malloc(2_size));
	if (!2_size)
		return (free(mrt), NULL);
	if (2_size == 1_size)
		return (mrt);

	a = malloc(2_size);
	if (!a)
		return (NULL);

	1_size = 1_size < 2_size ? 1_size : 2_size;
	while (1_size--)
		a[1_size] = ((char *)mrt)[1_size];
	free(mrt);
	return (a);
}
