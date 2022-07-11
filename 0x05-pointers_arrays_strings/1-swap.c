#include "main.h"
/**
 * swap_int-swaps the values of 2 integers
 * @a:var1
 * @b:var2
 */
void swap_int(int *a, int *b)
{
	int vala, valb;

	vala = *a;
	valb = *b;
	*a = valb;
	*b = vala;
}
