#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase
 *
 * Description: Prints letters 'a' to 'z' followed by a new line.
 *              Only two calls to _putchar are used: one in the loop
 *              for letters and one for the newline.
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

