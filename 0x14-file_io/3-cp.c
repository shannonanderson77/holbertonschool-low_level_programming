#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include "holberton.h"

/**
 * main - a program that copies the content of a file to another file
 * @argc: arguments passed to program
 * @argv: program name, file_name_from, file_name_to
 * Return: void
 */

int main(int argc, char **argv)
{
int buffer = 1024;
int FD_VALUE_READ;
int FD_VALUE_WRITE;
int FD_VALUE_COPY;

if (argc != 3)
{
printf("Error: cp %s %s\n", argv[1], argv[2]);
exit(97);
}
if (argv[1] == NULL)
{
printf("Error: Can't read from %s\n", argv[1]);
exit(98);
}
argv[2] = malloc(sizeof(argv[1]));
FD_VALUE_WRITE = open(argv[2], O_CREAT | O_TRUNC | O_RDWR,
S_IWUSR | S_IRUSR | S_IRGRP | S_IWGRP | S_IROTH);
if (FD_VALUE_WRITE == -1)
{
printf("Error: Can't write to %s\n", argv[2]);
exit(99);
}
FD_VALUE_READ = open(argv[1], O_RDONLY);
FD_VALUE_COPY = read(FD_VALUE_READ, argv[2], buffer);
if (FD_VALUE_READ == -1)
{
printf("Error: Can't read from file %s\n", argv[1]);
exit(98);
}
if (write(FD_VALUE_WRITE, argv[2], FD_VALUE_COPY) == -1)
{
printf("Error; Can't write to %s\n", argv[2]);
exit(99);
}
return (0);
}
