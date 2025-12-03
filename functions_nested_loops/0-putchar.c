#include <stdio.h>

/**
 * main - Prints the string "_putchar"
 *
 * Description: Uses only putchar to print the text followed
 *              by a new line. Code follows Betty style rules.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char text[] = "_putchar\n";
	int i;

	for (i = 0; text[i] != '\0'; i++)
	{
		putchar(text[i]);
	}

	return (0);
}

