#ifndef _MAIN_H_
#define _MAIN_H_

/**
 * putchar -puts character to std output
 */
int _putchar(char c);

/**
 * reset_to_98-updates the value it points to to 98
 */
void reset_to_98(int *n);

/**
 * swap_int- swaps the values of two integers.
 */
void swap_int(int *a, int *b);

/**
 * int_strlen-returns the length of a string.
 */
int _strlen(char *s);

/**
 * _put- prints a string, followed by a new line, to stdout
 */
void _puts(char *str);

/**
 * print_rev- prints a string, in reverse, followed by a new line.
 */
void print_rev(char *s);
/**
 * rev_string- reverses a string.
 */
void rev_string(char *s);

/**
 * puts2- prints every other character of a string, starting with the first character
 */
void puts2(char *str);

/**
 * puts_half- half of a string, followed by a new line.
 */
void puts_half(char *str);

/**
 * print_array-prints n elements of an array of integers
 */
void print_array(int *a, int n);

/**
 * *_strcpy-copies the string pointed to by src, including the terminating null byte (\0), to the buffer pointed to by dest
 */
char *_strcpy(char *dest, char *src);


#endif
