#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = 'a','A'; ch <= 'z','Z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
