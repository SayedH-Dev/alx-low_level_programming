#include <stdio.h>

/**
  * main - print all LC alphabits except q & e
  * Return: 0
  */

int main(void)
{
char b;

for (b = 'a' ;b <= 'z'; b++)
{
if (b == 'e')
{
continue;
}
if (b == 'q')
{
continue;
}
putchar(b);
}

putchar('\n');
return (0)
}
