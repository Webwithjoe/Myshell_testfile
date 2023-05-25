#include "shell.h"


/* This program helps to tonize a buffer with delimiter */

/**
  * tokenize - FUNC tokenizes a buffer with a delimiter
 * @buffer: buffer to tokenize
 * @delimiter: delimiter to also tokenize
 *
 * Return: pointer to an array of pointers to the tokens
 */
char **tokenize(char *buffer, char *delimiter)
{
	char **tokens = NULL;
	size_t i = 0, mycount = 10;

	if (buffer == NULL)
		return (NULL);
	tokens = malloc(sizeof(char *) * mycount);
	if (tokens == NULL)
	{
		perror("Fatal Error");
		return (NULL);
	}
	while ((tokens[i] = new_strtok(buffer, delimiter)) != NULL)
	{
		i++;
		if (i == mycount)
		{
			tokens = _realloc(tokens, &mycount);
			if (tokens == NULL)
			{
				perror("Fatal Error");
				return (NULL);
			}
		}
		buffer = NULL;
	}
	return (tokens);
}
