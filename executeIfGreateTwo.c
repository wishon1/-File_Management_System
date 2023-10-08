#include "file.h"
/**
 *
 *
 */
void executeIfGreate_two(char **tok, char *_line_str)
{
	perror("#error; only two token expected");
	free(tok);
	free(_line_str);
	exit(EXIT_FAILURE);
}
