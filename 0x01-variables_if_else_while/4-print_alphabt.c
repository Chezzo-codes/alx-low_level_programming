#include <stdio.h>

/**
* function_name - Short description, single line
*
* Description: Longer description of the function)?
* Return: Description of the returned value
*/

int main(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		if (x == 'e' || x == 'q')
		{
			x++;
		}
		putchar(x);
	}
	putchar('\n');
	return (0);
}
