#include "main.h"
/**
 * main - print alphabet in lower case
 *
 * Return: 0
 */
void print_alphabet(void);
{
	char ch

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
