#include <stdio.h>
/**
 * main - Entry point
 * Description: C program that prints exactly Programming.
 * Return: Always 0 (Success)
 */
void print_alphabet(void);

int main(void)
{
	print_alphabet_x10();
	return (0);
}
/**
 * print_alphabet - prints the alphabet .
 */
void print_alphabet_x10(void)
{
	char l;
  int i;
  
  for (i = 0;i <= 10;i++)
  {
    for (l = 'A' ; l <= 'Z' ; l++)
      putchar(l);
    putchar('\n');
  }
}
