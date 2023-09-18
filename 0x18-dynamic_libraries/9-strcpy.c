#include <stdio.h>
#include <string.h>
#include "main.h"

/**
  * *_strcpy - copy a stirng from source to destination
  * @dest: destination that we copy to
  * @src: source that we copy from
  * Return: dest (destination)
  */
char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);

	return (dest);
}
