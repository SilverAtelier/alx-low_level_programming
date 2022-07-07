#ifndef _MAIN_H_
#define _MAIN_H_
/**
 * _putchar-writes character to stdout
 */

int _putchar(char c);

/**
 * print lowercase alphabet
 */

void print_alphabet(void);

/**
 * print lowercase alphabet 10x
 */
void print_alphabet_x10(void);

/**
 * checks lowercase
 * Return: int
 */
int _islower(int c);

/**
 * checks the alphabet character
 * Return: 1 lower or uppercase, 0 not alphabet character
 */

int _isalpha(int c);

/**
 * print sign of numbers
 * Return: 1 > 0, 0 == 0, -1 < 0
 */

int print_sign(int n);

/**
 * compute absolute value of integer
 * Return: the absolute value
 */

int _abs(int);

/**
 * print last digit of integer
 * Return: last digit of number
 */

int print_last_digit(int);

/**
 * print every minute of a day
 */

void jack_bauer(void);

/**
 * print 9 times table
 */

void times_table(void);

/**
 * adds two integers
 * Return:their sum
 */

int add(int a, int b);

/**
 * prints numbers from n to 98
 */

void print_to_98(int n);

/**
 *
 * print multiplication table upto n
 */

void print_times_table(int n);

#endif
