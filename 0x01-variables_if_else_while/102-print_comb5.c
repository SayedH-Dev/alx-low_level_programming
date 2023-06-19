#include <stdio.h>

/**
  * main - possible combination of 2 double digits
  * Return: 0
  */

int main(void)
{
int x;
int y;
int z;
int t;

for (x = '0' ; x <= '9' ; x++)
{
for (y = '0' ; y <= '9' ; y++)
{
if (y == x)
{
continue;
}
for (z = '0' ; z <= '9' ; z++)
{
if (z == x && z == y)
{
continue;
}
for (t = '0' ; t <= '9' ; t++)
{
if (t == x && t == y && t == z)
{
continue;
}
putchar(x);
putchar(y);
putchar(' ');
putchar(z);
putchar(t);
if (x != '9' && y != '8' && z != '7' && t != '6')
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
