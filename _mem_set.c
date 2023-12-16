#include "shell.h"

/**
 * _memset_ - fills memory with a constant byte
 * @a: the pointer to the memory area
 * @b: the byte to fill *s with
 * @c: the amount of bytes to be filled
 * Return: (a) a pointer to the memory area a
 */
char *_memset_(char *a, char b, unsigned int c)
{
	unsigned int k;

	for (k = 0; k < c; k++)
		a[k] = b;
	return (a);
}
