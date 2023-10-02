#include "main.h"
/**
  *read_textfile - reads a text file and prints it to the POSIX std output
  *
  *@filename: file name
  *
  *@letters: number of letters to read and print
  *
  *Return: Actual number of letters it could read and print else 0
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *b;
	ssize_t o, r, w;

	if (filename == NULL)
		return (0);
	b = malloc(sizeof(char) * letters);
	if (b == NULL)
		return (0);
	o = open(filename, O_RDONLY);
	r = read(o, b, letters);
	w = write(STDOUT_FILENO, b, r);
	if (r == -1 || o == -1 || w != r || w == -1)
	{
		free(b);
		return (0);
	}
	free(b);
	close(o);
	return (w);
}
