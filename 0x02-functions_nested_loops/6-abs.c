#include <stdio.h>
#include "main.h"

/**
 * abs - computes absolute value of a value
 * @int - integer
 *description : computes integer
 *
 * Return:int
 */

int _abs(int c)
{

	if( c > 0)
	{
		c = +c;
	}
	else
	{
		c = -c;
	}
	return(c);
}
