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
	long long d;
	float f;

printf("Size of a char: %lu bytes(s)\n", (unisgned long)
sizeof(a));
printf("Size of an int: %lu bytes(s)\n", (unisgned long)
sizeof(b));
printf("Size of a long int: %lu bytes(s)\n", (unisgned long)
sizeof(c));
printf("Size of a long long: %lu bytes(s)\n", (unisgned long)
sizeof(d));
printf("Size of a float: %lu bytes(s)\n", (unisgned long)
sizeof(f));
return (0);
}
