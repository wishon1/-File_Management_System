#include "file.h"
/**
 *
 *
 */
void check_malloc_failure(char **space, char *array)
{
		perror("#memory allocation failed for token");  
		free(space);
		free (array);
		exit(EXIT_FAILURE);
}	
