#include "file.h"
/**
 *
 *
 */
int main(int argc, char **argv)
{
	char *file_name = "$ ", char *line_str = NULL;
	size_t get_count = 0;
	char *token, *delim = " ";
	int counter, get_byte;

	(void)argc, (void)argv;
	
	if (isatty(0) == 1)
	{
		/* write the prompt */
		write(1, file_name, strlen(file_name));
		
		get_byte = getline(&line_str, &get_count, stdin)
		if (get_byte == -1)
			check_getline_failure(0, line_str);
		/* allocate space for the command to be tokenize */
		token = malloc(strlen(line_str) + 1)
		if (token == NULL)
			check_malloc_failure(token, line_str);

		/* tokenize and count the number of tokens */
		token = strtok(line_str, delim);
		for (counter = 1; token != NULL; counter++)
			token = strtok(NULL, delim);

		if (counter > 2)
			executeIfGreateTwo(token, line_str)
		else if (counter < 2)
			executeIfLessTwo(token, line_str);
		else
			token_handle(token, line_str);
	}
	return (0);
}
