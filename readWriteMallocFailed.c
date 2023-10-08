#include "file.h"
/**
 *
 *
 */
void readWriteMallocFailed(char *_ptr, char *_line, char **_tok)
{
	free(_ptr);
	free(_line);
	free(_tok);
	exit(1);
}
