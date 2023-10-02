#include "main.h"

char *buffer_generator(char *filename);
void close_file(int filedescriptor);
/**
  *buffer_generator - Created a buffer of size 1024bytes.
  *
  *@filename: File name
  *
  *Return: A pointer to the buffer created.
  */
char *buffer_generator(char *filename)
{
	char *b;

	b = malloc(sizeof(char) * 1024);

	if (b == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
	return (b);
}

/**
  *close_file - Closes file.
  *
  *@filedescriptor: The file descriptor to be closed.
  */
void close_file(int filedescriptor)
{
	int i;

	i = close(filedescriptor);
	if (i == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", filedescriptor);
		exit(100);
	}
}

/**
  *main - Copies the contents of a file to another file.
  *
  *@argc: Argument count
  *
  *@argv: Argument vector
  *
  *Return: 0 on success.
  */
int main(int argc, char *argv[])
{
	int source;
	int destination;
	int r;
	int w;
	char *b;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	b = buffer_generator(argv[2]);
	source = open(argv[1], O_RDONLY);
	r = read(source, b, 1024);
	destination = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while (r > 0)
	{
		if (source == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(b);
			exit(98);
		}
		w = write(destination, b, r);
		if (destination == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(b);
			exit(99);
		}
		r = read(source, b, 1024);
		destination = open(argv[2], O_WRONLY | O_APPEND);
	}
	free(b);
	close_file(source);
	close_file(destination);
	return (0);
}
