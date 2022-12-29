#include <main.h>


/**
 * *print_alphabet  - prints the lower case alphabet
 *
 *
 * Return: void 
 */

void print_alphabet(void)
{
	char c = 'a';
	int i;

	for (i = 0; i < 26; i++)
	{
		_putchar(c + 1);
	}
	_putchar(10);
}
