#include "file.h"
/**
 *
 *
 */
void check_getline_failure(int val, char *command)
{
	write(0, "\n", 1);
	perror("#memory allocation failed");
	free(command);
	exit(val);
}
