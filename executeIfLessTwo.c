#include "file.h"
/**
 *
 *
 */
void executeIfLess_two(char **_token, char *_line_str)
{
	perror("#error; less than two tokens");
	free(_token);
	free(_line_str);
	exit(EXIT_FAILURE);
}
