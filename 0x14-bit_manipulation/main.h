#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdio.h>

int _putchar(char c);
/* task 0 */
unsigned int binary_to_uint(const char *b);
int length(const char *);
int power(int, int);

/* task 1 */
void print_binary(unsigned long int n);
unsigned long int powers(unsigned long int base, unsigned long int pow);

/* task 2 */
int get_bit(unsigned long int n, unsigned int index);

/* task 3 */
int set_bit(unsigned long int *n, unsigned int index);

/* task 4 */
int clear_bit(unsigned long int *n, unsigned int index);

/* task 5 */
unsigned int flip_bits(unsigned long int n, unsigned long int m);

#endif
