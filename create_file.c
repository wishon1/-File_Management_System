#include "file.h"
/**
 *
 *
 */
int create_file(char **arr, char *line_str)
{
	int buffer, get_buf;
	char *file_content = NULL, *file_data;
	size_t file_size = 0;
	int return_write;

	file_data = "please write on the file";

	if (arr[1] == NULL)
		open_file_failed(arr, line_str);

	buffer = open(arr[1], O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (buffer == -1)
		open_file_failed(arr, line_str);

	write(1, file_data, strlen(file_data));
	write(1, "\n", 1);

	get_buf = getline(&file_content, &file_size, stdin);
	if (get_buf == -1)
		failedToWriteFile(arr, buffer, line_str, file_content);
	
	return_write = write(buffer, file_content, get_buf);	
	if (return_write == -1)
		failedToWriteFile(arr, buffer, line_str, file_content);

	free(file_content);
	close (buffer);

	return (1);
}
