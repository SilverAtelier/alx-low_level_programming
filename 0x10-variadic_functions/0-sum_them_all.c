#include <stdargs.h>
#include <variadic_functions.h>
/*sum_them - returns sum of all parameters
 * @n: first arg 
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int i;

	va_start(ap,n);
	for (i = 0; i < n; i++)
	{
		int sum;
		sum += va_arg(ap, int);
	}
	va_end(ap);
	return (sum);
}
