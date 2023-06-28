#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: input
 *
*/

void puts_half(char *str)
{
int k = 0, i = 0;

while (str[l])
{
	k++;
}
k--;

i = k / 2;
while (i < k)
{
	_putchar(str[i + 1]);
	i++;
}
_putchar('\n');
}
