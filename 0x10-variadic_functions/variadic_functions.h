#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_char(char *a, va_list b);
void print_int(char *a, va_list b);
void print_float(char *a, va_list b);
void print_char_ptr(char *a, va_list b);

/**
 * struct f_types - Struct
 * @format: conversion format
 * @f: function pointer
 */
typedef struct f_types
{
	char *format;
	void (*f)(char *a, va_list b);
} f_t;

#endif
