#ifndef FILE_H
#define FILE_H
#define Buff_size 1030

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include <sys/stat.h>

/**
 * void fgets_failure(char *array[], char *_file_content, char *_buffer);
 * void mallocFailed_file_content(char *array[], char *fileContent, char *_buffer);
 * void tok_command(char *str);
 * void check_malloc_failure(char *space, char *array);
 */
void check_getline_failure(int val, char *command);
void executeIfLess_two(char **_token, char *_line_str);
void executeIfGreate_two(char **tok, char *_line_str);
int token_handle(char **_token, char *_line_string);
void check_malloc_failure(char **space, char *array);
int create_file(char **arr, char *line_str);
void open_file_failed(char **_arr, char *line_str);
void failedToWriteFile(char **_arr, int buff, char *_line_str, char *file);
int read_file(char **tok, char *_line_);
void readWriteMallocFailed(char *_ptr, char *_line, char **_tok);

#endif /* FILE_H */
