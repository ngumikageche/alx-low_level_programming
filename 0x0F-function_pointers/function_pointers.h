#include<stdio.h>
#include<stddef.h>
#ifndef HEADER_FILE
#define HEADER_FILE
char _putchar(char ch);
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
#endif
