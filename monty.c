#include "monty.h"
//char **_strtok(char *str, const char *delim)
int main(int argc, char **argv)
{
    FILE *fp;
    char *line = NULL;
    size_t len = 0;
    ssize_t read;
    char **arr;
    int i;
    stack_t *stacklist;

    if (argc != 2)
    {
	    printf("something went wrong\n");
	  return (0);
    }

    fp = fopen(argv[1], "r");
    if (fp == NULL)
        exit(EXIT_FAILURE);
	
    stacklist = malloc(sizeof(stack_t));

    while ((read = getline(&line, &len, fp)) != -1) {
        /* printf("Retrieved line of length %zu:\n", read);
        printf("%s", line);
	*/
	arr = _strtok(line, " \t");
	d_function(arr, &stacklist);

	for (i = 0; arr[i] != NULL; i++)
	{
		printf("%s ", arr[i]);
	}
	printf("\n");
    }

    fclose(fp);
    if (line)
        free(line);
    exit(EXIT_SUCCESS);
}
