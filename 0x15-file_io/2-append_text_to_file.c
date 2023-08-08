#include "main.h"
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>

/**
  * append_text_to_file - function that appends text at the end of a file
  * @filename: pointer to the file we want to add text at the end of it
  * @text_content: pointer to the text we want to add
  * Return: 1 if success or -1 if failed
  */
int append_text_to_file(const char *filename, char *text_content)
{
	FILE *file;

	if (filename == NULL)
		return (-1);

	file = fopen(filename, "a");

	if (file == NULL)
		return (-1);

	if (text_content != NULL)
		fputs(text_content, file);

	fclose(file);

	if (chmod(filename, 0664) != 0)
		return (-1);
	return (1);
}

