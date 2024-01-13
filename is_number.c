#include "monty.h"

/**
 * is_number - checks if a string is a number
 * @nbr: string to check
 *
 * Return: 1 if true, 0 if false
 */
int is_number(char *nbr)
{
	int i = 0;

	if (nbr == NULL)
		return (0);
	if (nbr[0] == '-')
		i++;
	while (nbr[i] != '\0')
	{
		if (isdigit(nbr[i]) == 0)
			return (0);
		i++;
	}
	return (1);
}
