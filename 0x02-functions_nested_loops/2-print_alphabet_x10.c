#include <stdio.h>
/**
 * main - Entry point
 * Description: C program that prints exactly Programming.
 * Return: Always 0 (Success)
 */
void print_alphabetx10(void);

int main(void)
{
	print_alphabetx10();
	return (0);
}
/**
 * print_alphabet - prints the alphabet .
 */
void print_alphabetx10(void)
{
	char l; int i;
	
	for (i = 0 ; i <= 10 ; i++)
	{
		for (l = 'A' ; l <= 'Z' ; l++)
			putchar(l);
		putchar('\n');
	}
}
