#include "holberton.h"

/**
* print_alphabet - prints alphabet
* 
* Description: prints lowercase alphabet
* Return: void
*/

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
	return;
}
