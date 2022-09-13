#include "main.h"
#include <stdio.h>

/**
 * main - a function abs that prints the absolut value
 *
 * the int to print is n
 *
 * return Always 0.
 */

int _abs(int n)
{

	if (n < 0)
	{
		return (n * (-1));
	}

	else if (n == 0)
	{
		return (0);
	}

	else
	{
		return (n);
	}
}
