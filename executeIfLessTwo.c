#include "file.c"
/**
 *
 *
 */
void executeIfLessTwo(char *_token, *_line_str)
{
	perror("#error; less than two tokens")
	free(_token);
	free(_line_str);
	exit(EXIT_FAILURE);
}
