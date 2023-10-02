#include "main.h"
/**
  *append_text_to_file - Function that appends text at the end of a file.
  *
  *@filename: A pointer to the name of the file.
  *
  *@text_content: The string to add to the end of the file.
  *
  *Return: 1 for success -1 for fail, NUll name or file exists
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int length = 0;
	int w;
	int o;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[length])
			length++;
	}
	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, length);
	if (w == -1 || o == -1)
		return (-1);
	close(o);
	return (1);
}
