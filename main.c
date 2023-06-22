#include "monty.h"
var varies = {NULL, NULL, NULL, 0};
/**
* main - monty code interpreter
* @argc: number of arguments
* @argv: monty file location
* Return: 0 on success
*/
int main(int argc, char *argv[])
{
	char *line;
	FILE *f;

	size_t size = 0;
	ssize_t to_read = 1;
	stack_t *stack = NULL;
	unsigned int num = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	f = fopen(argv[1], "r");
	varies.f = f;
	if (!f)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (to_read > 0)
	{
		line = NULL;
		to_read = getline(&line, &size, f);
		varies.line = line;
		num++;
		if (to_read > 0)
		{
			instruct(line, &stack, num, f);
		}
		free(line);
	}
	freem(stack);
	fclose(f);
	return (0);
}


