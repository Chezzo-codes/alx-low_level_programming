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
	char charType;
	int intType;
	long int longintType;
	long long int longlongintType;
	float floatType;

	printf("Size of a char: %zu bytes\n", sizeof(charType));
	printf("Size of an int: %zu bytes\n", sizeof(intType));
	printf("Size of a long int: %zu bytes\n", sizeof(longintType));
	printf("Size of a long long int: %zu bytes\n", sizeof(longlongintType));
	printf("Size of a float: %zu byte\n", sizeof(floatType));
	return (0);
}
