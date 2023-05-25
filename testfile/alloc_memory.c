#include "shell.h"

/* THis prgram reallocates memory to hold array */

/**
* _realloc - FUNCTION reallocates a pointer to increase allocated space

 * @pointer: pointer to old array

 * @size: pointer to num of elements in the old array
 *
 * Return: pointer to the new array
 */

char **_realloc(char **ptr, size_t *size)
{
	char **new;
	size_t i;

	new = malloc(sizeof(char *) * ((*size) + 10));
	if (new == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (i = 0; i < (*size); i++)
	{
		new[i] = ptr[i];
	}
	*size += 10;
	free(ptr);
	return (new);
}

