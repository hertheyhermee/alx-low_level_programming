#ifndef MAIN_H
#define MAIN_H

#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int _string_len(char *s);
void error_handler(int err_code, char *file_name, int fd_from, int fd_to);
void copy_file_content(int fd_from, int fd_to, char *file_from, char *file_to);
int open_file(char *file_name, int flag, mode_t mode);
void close_file(int fd);


#endif
