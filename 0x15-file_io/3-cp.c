#include <fcntl.h>
#include <errno.h>
#include "main.h"

/**
  * copy_file_to - function that copy file content from origin to destination file
  * @argc: no. of arguments
  * @argv: pointer to arguments
  * Return: 0 if success, 97 wrong no. of arguments,
  * 98 failed to read from origin, 99 failed to write in destination
  * 100 failed closing file descriptors
  */
int copy_file_to(int argc, char *argv[])
{
	const char *file_from, *file_to;
        char buffer[1024];
        int bytesR, bytesW, fd_from, fd_to;
	
	if (argc != 3)
	{
		fprintf(stderr, "Usage: %s file_from file_to\n", argv[0]);
		return (97);
	}

	file_from = argv[1];
	file_to = argv[2];

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
		fprintf(stderr, "Error: Can't read from file %s\n", file_from);
		return (98);
	}
	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd_to == -1)
	{
		close(fd_from);
		fprintf(stderr, "Error: Can't write to %s\n", file_to);
		return (99);
	}
	while ((bytesR = read(fd_from, buffer, sizeof(buffer))) > 0)
	{
		bytesW = write(fd_to, buffer, bytesR);
		if (bytesW != bytesR)
		{
			close(fd_from);
			close(fd_to);
			fprintf(stderr, "Error: Can't write to %s\n", file_to);
			return (99);
		}
	}
	if (bytesR == -1)
	{
		close(fd_from);
		close(fd_to);
		fprintf(stderr, "Error: Can't read from file %s\n", file_from);
		return (98);
	}
	if (close(fd_from) == -1 || close(fd_to) == -1)
	{
		fprintf(stderr, "Error: Can't close fd %d\n", errno);
		return (100);
	}
	return (0);
}

