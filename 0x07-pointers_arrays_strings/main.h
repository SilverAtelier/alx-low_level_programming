#ifndef _MAIN_H_
#define _MAIN_H_
/**
 * _putchar - puts character to standard output
 * @c: character to put to standard output
 */

int _putchar(char c);

/**
 * _memset - fill n bytes of memory with a constant value
 * Return: memory area
 */

char *_memset(char *s, char b, unsigned int n);

/**
 * _memcpy - copy n bytes of memory from source to destination
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n);

/**
 * _strchr - locate 1st occurrence of character in string and returns pointer there
 * Return: pointer to that character in string
 */

char *_strchr(char *s, char c);

/**
 * _strspn - return length of string that matches values consistently
 * Return: number of bytes consecutively matched
 */

unsigned int _strspn(char *s, char *accept);

/**
 * _strpbrk - return pointer to byte in s that matches a byte in accepted target
 * Return: pointer to index of string at first occurence
 */

char *_strpbrk(char *s, char *accept);

/**
 * _strstr - locate and return pointer to first occurence of substring
 * Return: pointer to index of string at first occurence of whole substring
 */

char *_strstr(char *haystack, char *needle);

/**
 * print_chessboard - print chessboard given set 2D array
 */

void print_chessboard(char (*a)[8]);

/**
 * print_diagsums - print sums of diagonals in matrix
 */

void print_diagsums(int *a, int size);

/**
 * set_string - set value of pointer to a char
 */

void set_string(char **s, char *to);

#endif