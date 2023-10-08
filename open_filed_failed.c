#include "file.h"
/**
 *
 *
 */
void open_file_failed(char **_arr, char *line_str)
{
	perror("#error: unable to open file");
	free(_arr);
	free(line_str);
	exit(1);
}

