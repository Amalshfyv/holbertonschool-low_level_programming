#include <unistd.h>

/**
 * main - Prints the string "_putchar"
 *
 * Description: Uses the write system call to print the text
 *              followed by a new line. Complies with Betty style.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	write(1, "_putchar\n", 9);
	return (0);
}

