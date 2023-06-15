#include <stdio.h>
/**
  * main - print sizes of different data types
  * Return: 0
  */
int main(void)
{
printf("Size of int: %zu byte(s)\n", sizeof(int));
printf("Size of char: %zu byte(s)\n", sizeof(char));
printf("Size of long int: %zu byte(s)\n", sizeof(long));
printf("Size of long long int: %zu byte(s)\n", sizeof(long long));
printf("Size of float: %zu byte(s)\n", sizeof(float));
return (0);
}
