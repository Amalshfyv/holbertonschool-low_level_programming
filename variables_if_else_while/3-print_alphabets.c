#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point of the program
 *
 * Description: Prints a random number and states
 *              whether it is positive, negative or zero.
 *
 * Return: Always 0 (Success)
**/
        int main(void){

                char c = 'a';
		char d = 'A';

                for(; c <= 'z'; c++)
                        putchar(c);
		putchar("\n");
              	for(; d <= 'Z'; d++)
			putchar(d);
                return (0);
        }
~            
