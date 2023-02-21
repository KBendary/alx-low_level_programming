#include "main.h"

/**
  * _abs - Computes the absolute value of an integer.
  * @r: The number to be computed.
  *
  * Return: Absolute value of number or zero
  */

int _abs(int r)
{
	if (r < 0)
	{
		return (r * -1);
	}
	else
		return (r);
}
