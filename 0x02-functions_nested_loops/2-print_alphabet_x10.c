#include"main.h"
/**
 * main-start of program
 * Return: Always 0 is success
 */
void print_alphabet_x10(void)
{
	char letter = 'a';
	int i = 1;
	do{
		do{
			_putchar(letter);
			letter++;
		} while (letter <= 'z');
		i++;
	} while (i <= 10);
	_putchar('\n');
}
