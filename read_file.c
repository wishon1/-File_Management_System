#include "file.h"
/**
 *
 *
 */
int read_file(char **tok, char *_line_)
{
	int fd, f_stat;
	int read_byte, write_byte;
	struct stat file;
	char *ptr;

	if (tok[1] == NULL)
	{
		perror("#error: file name does not exit!");
		free(_line_);
		free(tok);
		exit(1);
	}

	fd = open(tok[1], O_RDONLY);
	if (fd == -1)
		open_file_failed(tok, _line_);

	f_stat = fstat(fd, &file);
	if (f_stat == -1)
	{
		perror("#failed to access file descriptor");
		free(_line_);
		free(tok);
		exit(1);
	}
	ptr = malloc(file.st_size);
	if (ptr == NULL)
	{
		free(ptr);
		free(_line_);
		free(tok);
		exit(1);
	}
	read_byte = read(fd, ptr, file.st_size);
	if (read_byte == -1)
		readWriteMallocFailed(ptr, _line_, tok);
	write_byte = write(STDOUT_FILENO, ptr, read_byte);
	if (write_byte == -1)
		readWriteMallocFailed(ptr, _line_, tok);
	fflush(stdout);

	free(ptr);
	close(fd);
	return(1);
}
