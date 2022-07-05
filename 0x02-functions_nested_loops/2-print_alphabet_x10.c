#include"main.h"
/**
 * main-start of program
 * Return: Always 0 is success
 */
void print_alphabet_x10(void)
{
	char letter = 'a';
	int i;
	for (i = 1; i <= 10; i++)
	{
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
	} 
	_putchar('\n');
}
