#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <string.h>

int main(void);
char *_memset(char *s, char b, unsigned int n);
void simple_print_buffer(char *buffer, unsigned int size);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);

#endif