#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 * Description: C program that prints exactly Programming.
 * Return: Always 0 (Success)
 */
int _islower(int c)

int main(void)
{
	int r;
	
	r = _islower('H');
	//putchar(r + '0');
	//r = _islower('o');
	//_putchar(r + '0');
	//r = _islower(108);
	//_putchar(r + '0');
	//_putchar('\n');
	return (0);
}
/**
 * _islower - prints the alphabet .
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
