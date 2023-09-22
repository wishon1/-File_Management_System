#include "file.h"
/**
 *
 */
int token_handle(char *token[], char *line_string)
{
	char *create, *delete, *read, *update;

	create[] = {"Create", "create"};
	delete[] = {"Delete", "delete"};
	read[] = {"Read", "read"};
	update[] = {"Update", "update"};


	if (strcmp(token[0], create[0]) == 0 || strcmp(token[0], create[1]) == 0)
		create_file(token);
	else if (strcmp(token[0], delete[0]) == 0 || strcmp(token[0], delete[1]) == 0)
		delete_file(token);
	else if (strcmp(token[0], read[0]) == 0 || strcmp(token[0], read[1]) == 0)
		read_file(token);
	else if (strcmp(token[0], update[0]) == 0 || strcmp(token[0], update[1]) == 0)
		update_file(token);
	else if (strcmp(token, "exit") == 0)
		{
			free(line_string);
			free(token);
			exit(0);
		}
	else
	{
		perror("#invalid command, expected: %s, or %s\n", create[0], create[1]);
		perror("#invalid command, expected: %s, or %s\n", delete[0], delete[1]); 
		perror("#invalid command, expected: %s, or %s\n", read[0], read[1]); 
		perror("#invalid command, expected: %s, or %s\n", update[0], update[1]); 
		
		free(token);
		free(line_string);
		exit(1);	
	}
}
