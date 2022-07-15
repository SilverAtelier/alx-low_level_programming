#include "main.h"
/**
 * reverse_array-reverses content of an array
 * @a:var pointer to string array
 * @n:array count
 */
void reverse_array(int *a, int n)
{
    int count = 0, rev;

    n = n - 1;
    while (count <= n)
    {
        rev = a[count];
        a[count++] = a[n];
        a[n--] = rev;
    }
}