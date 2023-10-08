#include "file.h"
/**
 *
 */
int token_handle(char **_token, char *_line_string)
{
	if (strcmp(_token[0], "create") == 0 || strcmp(_token[0], "Create") == 0)
		create_file(_token, _line_string);
	else if (strcmp(_token[0], "read") == 0 || strcmp(_token[0], "Read") == 0)
		read_file(_token, _line_string);
	else if (strcmp(_token[0], update[0]) == 0 || strcmp(_token[0], update[1]) == 0)
		update_file(_token, _line_string);
	else if (strcmp(_token, "exit") == 0)
		{
			free(line_string);
			free(token);
			exit(1);
		}
*/
	else
	{
		perror("#error: command not found");
		free(_line_string);
		exit(1);
	}
	return(1);
}
