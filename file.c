#include "file.h"
/**
 *
 *
 */
int main(int argc, char **argv)
{
	char *file_name = "File$ ", *line_str = NULL;
	size_t get_count = 0;
	char **token, *delim = " \n";
	int counter, get_byte, i = 0;

	(void)argc, (void)argv;

	if (isatty(0) == 1)
	{
		/* write the prompt */
		write(1, file_name, strlen(file_name));

		get_byte = getline(&line_str, &get_count, stdin);
		if (get_byte == -1)
			check_getline_failure(1, line_str);
		/* allocate space for the command to be tokenize */
		token = malloc(sizeof(char *) *  get_byte + 1);
		if (token == NULL)
			check_malloc_failure(token, line_str);

		/* tokenize and count the number of tokens */
		token[i] = strtok(line_str, delim);
		counter = 0;
		while (token[counter] != NULL)
		{
			token[counter + 1] = strtok(NULL, delim);
			counter++;
		}

		if (counter > 2)
			executeIfGreate_two(token, line_str);
		else if (counter < 2)
			executeIfLess_two(token, line_str);
		else
			token_handle(token, line_str);
	}
	free(line_str);
	free(token);
	return(0);
}
