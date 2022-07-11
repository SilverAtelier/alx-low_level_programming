#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
/**
 * main-start of program
 */

int main(void)
{
	int i, paslen;
	char pass[];
	time_t t;

	srand((unsigned) time(&t));

	for (i = 0; i < 8; i++)
	{
		j = rand() % 7;
		pass[i] = j;
		for (l = 'a'; l <= 'z'; l++)
		{	
			pass[i+1] = l;	
		}
	}
	paslen = strlen(pass[]);
	if (paslen = 16)
	{
		printf("%s",pass[]);
	}
	else
		pass[] = pass[] + j;
		printf("%s", pass[]);
	return (0);
}
