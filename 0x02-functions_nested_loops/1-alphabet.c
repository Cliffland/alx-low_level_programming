#include "main.h"

/**
 * print_alphabet - entry point
 * description: a function that prints the alphabet
 * in lowercase followed by a new line 
 * return: void
 */
void print_alphabet(void)
{
	char letter = 'a';
	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	_putchar('\n');
}
