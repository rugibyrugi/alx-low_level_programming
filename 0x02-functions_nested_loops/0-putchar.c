#include "main.h"
/**
 * Main- prints _putchar
 *
 * Returns 0
 */
int main (void)
{
	char c;
	c [8] = "_putchar";
	int a = 0;
	while (a < 8)
	{ 
		_putchar (c[a]);
		a++;
	}
	_putchar ('\ln');
	return (0);
}
