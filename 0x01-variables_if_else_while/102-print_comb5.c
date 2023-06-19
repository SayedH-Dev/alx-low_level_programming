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
for (z = '0' ; z <= '9' ; z++)
{
for (t = '0' ; t <= '9' ; t++)
{
if (x > z && (x == z && y >= t) && (x * 10 + y == z * 10 + t))
continue; 
putchar('0' + x);
putchar('0' + y);
putchar(' ');
putchar('0' + z);
putchar('0' + t);
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
