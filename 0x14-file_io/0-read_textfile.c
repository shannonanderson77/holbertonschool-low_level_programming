#include "holberton.h"

/**
 * read_textfile - a function that reads a text file and prints it to the
 * POSIX standard output
 * @filename: file to be read
 * @letters: number of letters function should read and print
 * Return: number of letters function was able to read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
int fd_read;
int fd_write;
char *buffer;

if (filename == NULL)
	return (0);
buffer = malloc(sizeof(char *) * letters);
fd = open(filename, O_RDONLY);
if (fd == -1)
	return (0);
fd_read = read(fd, buffer, letters);
if (fd_read == -1)
	return (0);
fd_write = write(STDOUT_FILENO, buffer, fd_read);
if (fd_write == -1)
	return (0);
free(buffer);
return (fd_write);
}
