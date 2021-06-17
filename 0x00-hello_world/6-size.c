#include<stdio.h>
/**
* main - main function
* @void: No parameters
*
* Description: Makes use of the printf function to print a string
* Return: returns 0 if program is succesfull non-zero if unsuccessful.
*/
int main(void)
{
	int intType;
	float floatType;
	double doubleType;
	char charType;

	printf("Size of int: %zu bytes\n", sizeof(intType));
	printf("Size of float: %zu bytes\n", sizeof(floatType));
	printf("Size of double: %zu bytes\n", sizeof(doubleType));
	printf("Size of char: %zu byte\n", sizeof(charType));
	return (0);
}
