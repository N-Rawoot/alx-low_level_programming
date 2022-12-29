#include <stdio.h>

/** 
 * Print_alphabet_x10 - prints the lower case alphabet 10 times on new lines 
 *
 * Retunrn: Void 
 */

void print_alphabet_x10(void)
{
	char c = 'a';
	int i, j;

	for (1 = 0; 1 < 10; i++)
	{
		for (j = 0; j < 26; j++)
		{
			_putchar(c +j);
		}
		_putchar(10)
	}
}
