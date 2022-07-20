#ifndef _MAIN_H_
#define _MAIN_H_

/**
 * _putchar - puts character to standard output
 * @c: character to put to standard output
 */

int _putchar(char c);

/**
 * _puts_recursion - print string with new line
 */

void _puts_recursion(char *s);

/**
 * _print_rev_recursion - print string in reverse
 */

void _print_rev_recursion(char *s);

/**
 * _strlen_recursion - return string length
 * Return: string length
 */

int _strlen_recursion(char *s);

/**
 * factorial - find factorial of n
 * Return: factorial of number, -1 if negative n
 */

int factorial(int n);

/**
 * _pow_recursion - raise x to power y
 * Return: power of a number, -1 if power less than 0
 */

int _pow_recursion(int x, int y);

/**
 * _sqrt_recursion - find natural square root of n
 * Return: natural square root, or -1 if not natural root
 */

int _sqrt_recursion(int n);

/**
 * is_prime_number - check if prime
 * Return: 1 if prime, 0 if not
 */

int is_prime_number(int n);

/**
 * is_palindrome - check if palindrome
 * Return: 1 if palindrome, 0 if not
 */

int is_palindrome(char *s);

int wildcmp(char *s1, char *s2);

#endif