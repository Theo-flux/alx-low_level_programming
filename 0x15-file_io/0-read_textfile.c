#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"
/**
 * read_textfile -  function that reads a text file and prints it to the POSIX standard output.
 * @filename: pointer to file
 * @letters: the number of letters it should read and print
 * Return: 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, result, w;
	char *buf;
	
	buf = malloc(sizeof(char) * letters);
	if(filename == NULL)
	{
		return 0;
	}
	else
	{
		fd = open(filename, O_RDONLY);
		if(fd == -1)
		{
			return 0;
		}
		else
		{
			result = read(fd, buf, letters);
			w = write(STDOUT_FILENO, buf, result);
			free(buf);
			return w;

		}
	}
}
