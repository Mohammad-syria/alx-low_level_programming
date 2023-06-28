#include "main.h"
#include <stdio.h>
/**
 * print_array - print array of integers
 * @a: input
 * @n: input
*/

void print_array(int *a, int n)
{
int k;

for (k = 0; k < n; k++)
{
	if (k == (n - 1))
		printf("%d", a[k]);
	else
		printf("%d, ", a[k]);
}
printf("\n");
}
