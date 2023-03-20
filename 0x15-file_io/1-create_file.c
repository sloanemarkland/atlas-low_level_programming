#include "main.h"
/**
 * create_file - creates a file
 * @filename: name of the file to create
 * @text_content: NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	/**
	 * this func takes a string 'filename' and a string 'text_content'
	 * it creates a file with the name 'filename' and writes 'text_content' to it
	*/
	int fd, wr, len;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	for (len = 0; text_content[len]; len++)
		;

	wr = write(fd, text_content, len);
	if (wr == -1)
		return (-1);

	close(fd);
	return (1);
}
