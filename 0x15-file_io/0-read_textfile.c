#include "main.h"

/**
  * read_textfile - function that reads a text file
  * and print it to the standard output
  * @filename: pointer to the file we want to read
  * @letters: max. no. of read and printed letters
  * Return:  no. of read letters or 0 if failed
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file;
	char *tmp;
	ssize_t bytesr, bytesw;

	if (filename == NULL)
		return (0);

	file = NULL;
	file = fopen(filename, "r");

	if (file == NULL)
		return (0);

	tmp = (char *)malloc(letters);

	if (tmp == NULL)
	{
		fclose(file);
		return (0);
	}

	bytesr = fread(tmp, sizeof(char), letters, file);

	if (bytesr <= 0)
	{
		free(tmp);
		fclose(file);
		return (0);
	}

	bytesw = write(STDOUT_FILENO, tmp, (size_t)bytesr);

	if ((size_t)bytesw != (size_t)bytesr || bytesw <= 0)
	{
		free(tmp);
		fclose(file);
		return (0);
	}

	free(tmp);
	fclose(file);
	return (bytesr);
}

