#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdio.h>
#include <stdlib.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int bn_search(int *array, size_t left, size_t right, int value);
void print_array(int *array, size_t start, size_t end);
int advanced_binary(int *array, size_t size, int value);

#endif
