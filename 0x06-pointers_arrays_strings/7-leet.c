#include "main.h"

/**
  * leet - function to code the string
  * @c: string to be coded
  * Return: string after modification
  */
char *leet(char *c)
{
        int x;
        int y;
        int uppercase[] = {65, 69, 79, 84, 76};
        int lowercase[] = {97, 101, 111, 116, 108};
        int numbers[] = {52, 51, 48, 55, 49};
        int length;

        length = 5;

        for (x = 0 ; c[x] != '\0' ; x++)
        {
                for (y = 0 ; y < length ; y++)
                {
                        if (c[x] == uppercase[y] || c[x] == lowercase[y])
                        {
                                c[x] = numbers[y];
                                break;
                        }
                }
        }
        return (c);
}
