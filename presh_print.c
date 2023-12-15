#include "shell.h"

/**
* presh_print - prints a string
* @p: string to be printed
*
* Return: number of characters printed
*/
int presh_print(char *p)
{
	int n = 0;

	while (p[n] != '\0')
	{
		_putchar(p[n]);
		n++;
	}

	return (n);
}
