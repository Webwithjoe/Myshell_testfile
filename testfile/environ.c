#include "shell.h"

/* A file in a shell program that makes and free an environment */

/**
 * make_env - FUNCTION make the shell environment passed to main
 *
 * @env: environment passed to main
 *
 * Return: pointer the new environment
 */

char **make_env(char **env)
{
	char **newenv = NULL;
	size_t i;

	for (i = 0; env[i] != NULL; i++)
		;
	newenv = malloc(sizeof(char *) * (i + 1));
	if (newenv == NULL)
	{
		perror("Fatal Error");
		exit(1);
	}
	for (i = 0; env[i] != NULL; i++)
		newenv[i] = _strdup(env[i]);
	newenv[i] = NULL;
	return (newenv);
}

/**
 * free_env -This free the shell's environment
 *
 * @env: shell's environment
 *
 * Return: void
 */

void free_env(char **env)
{
	unsigned int i;

	for (i = 0; env[i] != NULL; i++)
		free(env[i]);
	free(env);
}
