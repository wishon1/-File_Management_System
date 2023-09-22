#include "file.h"
/**
 *
 *
 */
void check_getline(int val, char *command)
{
	write(1, "\n", 1);
	perror("#memory allocation failed");
	free(command);
	exit(val);
}
