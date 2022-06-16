#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @s: string to be encoded
 * Return - resultant string
 */
char *rot13(char *s)
{
	int x, z;

	char i[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char j[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (x = 0; s[x] != '\0'; x++)
	{
		for (z = 0; i[z] != '\0'; z++)
		{
			if (s[x] == i[z])
			{
				s[x] = j[z];
				break;
			}
		}
	}
	return (s);
}
