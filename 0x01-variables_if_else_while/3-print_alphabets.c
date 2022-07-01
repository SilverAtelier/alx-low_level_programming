#include <stdio.h>
/**
 * main - print alphabets lowercase and uppercase a-z A-Z using putchar
 * Return: Always 0 is success
 */

int main(void)
{
	char lower = 'a';
	char upper = 'A'; 
	
	/*lowercase*/
	while (lower <= 'z') 
	{
		putchar(lower);
		lower++;
	}
	/*uppercase*/
	while (upper <= 'Z')
	{
		putchar(upper);
		upper++;
	}

	putchar('\n');


	return (0);
}
