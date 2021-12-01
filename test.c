#include "monty.h"

/**
 * non_interactive - Executes the shell in non interactive mode
 * @path: Command path
 * @prog: Name of program
 *
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	int file;
	ssize_t count_r, count_w;
	FILE *buffer;
	char *line = NULL;
	size_t len = 0;

	if (argc != 2)
	{
		printf("something is wrong - ./monty montybytcodefile.m\n");
		return (0);
	}	

	if (argv == NULL)
		return (0);

	file = open(argv[1], O_RDONLY);
	if (file == -1)
		return (0);

	buffer = malloc(sizeof(FILE) * 1024);
	if (buffer == NULL)
	{
		return (0);
	}
	printf("After malloc\n");
	
	count_r = read(file, buffer, SSIZE_MAX);

	//count_w = write(STDOUT_FILENO, buffer, count_r);
	
	while (getline(&line, &len, buffer) != -1)
	{
		printf("%s\n", line);
	}


	/*count_r = read(file, buffer, letters);
	if (count_r == -1)
		return (0);

	count_w = write(STDOUT_FILENO, buffer, count_r);

	if (count_w == -1 || count_r != count_w)
		return (0);
	*/
	free(buffer);

	close(file);

	return (count_w);
}
