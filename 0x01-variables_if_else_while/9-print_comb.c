#include <stdio.h>

/**
* main - Entry point
*
* Description: print all comination of single digits
* Return: 0 on success
*/

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar('0' + i);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
