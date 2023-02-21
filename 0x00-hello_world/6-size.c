#include <stdio.h>
/**
 * main - a program that prints the size of various types on the computeir
 * Return: 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

printf("Size of a char: %lubytes(s)\n", (unsigned long)sizeof(a));
printf("Size of an int: %lubytes(s)\n", (unsigned long)sizeof(b));
printf("Size of a long int: %lubytes(s)\n", (unsigned long)sizeof(c));
printf("Size of a long long int: %lubytes(s)\n", (unsigned long)sizeof(d));
printf("Size of a float: %lubytes(s)\n", (unsigned long)sizeof(f));
return (0);
}
