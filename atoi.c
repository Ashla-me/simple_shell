#include "shell.h"

/**
 * _atoi - Converts a string to an integer.
 * @str: The input string.
 * Return: The integer value.
 */
int _atoi(char *str)

{
	int sign = 1;
	unsigned int total = 0;
	char null_flag = 0;

	while (*str)
	{
		if (*str == '-')
			sign *= -1;
		if (*str >= '0' && *str <= '9')
		{
			null_flag = 1;
			total = total * 10 + (*str - '0');
		}
		else if (null_flag)
			break;

		str++;
	}
	if (sign < 0)
		total = (-total);
	return (total);

}
