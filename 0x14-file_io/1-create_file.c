#include "holberton.h"

/**
 * create_file - a function that creates a file
 * @filename: name of the file to create
 * @text_content: a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
int length;
int fd;
int i;

if (filename == NULL)
	return (-1);
fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
if (fd == -1)
	return (-1);
i = 0;
while (text_content[i] != '\0')
{
	length = i++;
}
if (write(fd, text_content, length + 1) == -1)
	return (-1);
return (1);
}
