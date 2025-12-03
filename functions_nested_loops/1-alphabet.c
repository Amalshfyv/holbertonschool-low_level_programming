#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase
 *
 * Description: Prints letters 'a' to 'z' followed by a newline.
 * Only two calls to _putchar are used.
 */
void print_alphabet(void)
{
	int c;

	c = 'a';
	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}

