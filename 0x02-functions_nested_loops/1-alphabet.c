#include <stdio.h>
/**
 * main - Entry point
 * Description: C program that prints exactly Programming.
 * Return: Always 0 (Success)
 */
void print_alphabet(void);

int main(void)
{
	print_alphabet();
	return (0);
}
/**
 * main - Entry point
 * Description: C program that prints exactly Programming.
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char l;

	for (l = 'a' ; l < 'z' ; l++)
		printf("%c", l);
	printf("\n");
}
