#include "main.h"

/**
  * charIncl - function to check the char in the string
  * @str: string to be explored
  * @c: char to be searched for
  * Return: 1 char available 0 if not available
  */
int charIncl(char *str, char c)
{
	int x;

	for (x = 0; str[x] != '\0'; x++)
	{
		if (str[x] == c)
		{
			return (1);
		}
	}
	return (0);
}

int charIncl(char *str, char c);
/**
  * cap_string - capitalize the words in a string
  * @st: string to be capitalized
  * Return: string after capitalization
  */
char *cap_string(char *st)
{
	int x;
	int capital;
	char separate[];

	separate[] = " \t\n,;.!?\"(){}";
	capital = 1;

	for (x = 0; st[x] != '\0'; x++)
	{
		if (capital && (st[x] >= 'a' && st[x] <= 'z'))
		{
			st[x] = st[x] - 32;
		}
		if (charIncl(separate, st[x]))
		{
			capital = 1;
		}
		else
		{
			capital = 0;
		}
	}
	return (st);
}
