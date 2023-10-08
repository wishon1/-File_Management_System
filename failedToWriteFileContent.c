#include "file.h"
/**
 *
 */
void failedToWriteFile(char **_arr, int buff, char *_line_str, char *file)
{
	perror("#error: failed to write to file");
	free(_arr);
	free(_line_str);
	free(file);
	close(buff);
	exit(EXIT_FAILURE);
}
