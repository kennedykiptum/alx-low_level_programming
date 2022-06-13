#include "main.h"
/**
 * rev_string - reverses a string.
 * @s: pointer to the string
 */
void rev_string(char *s)
{
	char rev;
	int i, ur, ur1;

	ur = 0;
	ur1 = 0;

	while (s[ur] != '\0')
	{
		ur++;
	}

	ur1 = ur - 1;

	for (i = 0; i < ur / 2; ur++)
	{
		rev = s[i];
		s[i] = s[ur1];
		s[ur1--] = rev;
	}
}
