#include "main.h"

/**
  * create_file - function that creates a file
  * @filename: pointer to the file we need to create
  * @text_content: pointer to a string that contains the file content
  * Return: 1 if success or -1 if error
  */
int create_file(const char *filename, char *text_content)
{
	FILE *new_file;

	if (filename == NULL)
		return (-1);

	new_file = fopen(filename, "w");

	if (new_file == NULL)
		return (-1);

	if (text_content != NULL)
		fputs(text_content, new_file);

	fclose(new_file);
	return (1);
}

