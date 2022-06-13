#include "main.h"
/**
 * puts2 - prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @str: pointer to thr string
 */
void puts2(char *str)
{
	int uni, i;

	uni = 0;

	while (str[uni] != '\n')
	{
		uni++;
	}

	for (i = 0; i < uni; i += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
