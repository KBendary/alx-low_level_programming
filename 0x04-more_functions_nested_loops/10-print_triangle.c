#include "main.h"

/**
  * print_triangle - Prints a triangle of squares according parameter
  * @size: The size of the squares triangle
  *
  * Return: empty
  */

void print_triangle(int size)

{
	if (size <= 0)
		_putchar('\n');
	else
	{
		int c;
		int s;
		int p;

		for (c = 1; c <= size; c++)
		{
			for (p = size - 1; p = 0; p--)
			{
				_putchar(' ');
			}
		}
		{
			for (s = 1; s <= c; s++)
			{
				_putchar('#');
			}
		}
			_putchar('\n');
	}
}
