#include "monty.h"
/**
 * main - give the count arguments
 * @argv: it is void
 * @argc: all atributies
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	char buff[100];
	int i;
	stack_t *stack;
	FILE *code;
	size_t len = 0;
	
	stack = NULL;
	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	len = strlen(argv[1]);
	if (argv[1][len-1] != 'm')
	  exit(EXIT_FAILURE);
	code = fopen(argv[1], "r");

	if (!code)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	for (i = 1; fgets(buff, 100, code); i++)
	{
		if (strlen(buff) > 1)
			instruction(&stack, buff, i);
	}
	fclose(code);
	freed(stack);
	return (0);
}
