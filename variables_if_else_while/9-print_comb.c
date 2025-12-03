#include <stdio.h>

/**
 * main - Prints all possible combinations of single-digit numbers
 *
 * Description: Numbers are printed in ascending order and separated
 *              by a comma followed by a space. The program uses only
 *              putchar (maximum four times), avoids char variables,
 *              and places all logic inside main.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + '0');

		if (n < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}

