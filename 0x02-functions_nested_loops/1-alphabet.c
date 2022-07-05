#include"main.h"

/**
 * main-start of program
 * Return: always 0 is success
 */
void print_alphabet(void)
{
	char letter = 'a';

	do {
		_putchar(letter);
		letter++;
	}while (letter <= 'z')
	_putchar('\n');
}
