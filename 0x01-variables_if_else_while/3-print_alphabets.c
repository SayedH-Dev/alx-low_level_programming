#include <stdio.h>

/**
  * main - print lower then uppercase
  * Return: 0
  */

int main(void)
{
char bl;
char bu;

while (bl <= 'z')
{
putchar(bl);
bl++;
}
while (bu <= 'Z')
{
putchar(bu);
bu++;
}

putchar('\n');

return (0);
}
