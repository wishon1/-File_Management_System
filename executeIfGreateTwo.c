#include "file.c"
/**
 *
 *
 */
void executeIfGreateTwo(char *tok, _line_str)
{
	perror("#error; only two token expected")
	free(tok);
	free(_line_str);
	exit(EXIT_FAILURE);
}
