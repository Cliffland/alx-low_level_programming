#include "main.h"

/**
 * _islower - entry point
 * description: checks is a character in lowercase
 * @c: the integer value it receives
 * return: 1 if true. 0 if false
 */

int _islower(int c)
{
	int i = 'a';

	for (i = 'a'; i <= 'z'; i++)
	{
		/*refer int c*/
		if (c == i)
		{
			return (1);
		}
	}
	return (0);
}
