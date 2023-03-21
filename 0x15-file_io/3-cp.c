#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

int safe_close(int);
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d

", fd);
		exit(100);
	}
}

int main(int argc, char *argv[])
{
	int file_from, file_to;
	char *buffer[1024];
	ssize_t read_bytes, write_bytes;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to

");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s

", argv[1]);
		exit(98);
	}

	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s

", argv[2]);
		exit(99);
	}

	read_bytes = read(file_from, buffer, 1024);
	if (read_bytes == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s

", argv[1]);
		exit(98);
	}

	while (read_bytes > 0)
	{
		write_bytes = write(file_to, buffer, read_bytes);
		if (write_bytes == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s

", argv[2]);
			exit(99);
		}
		read_bytes = read(file_from, buffer, 1024);
		if (read_bytes == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s

", argv[1]);
			exit(98);
		}
	}

	safe_close(file_from);
	safe_close(file_to);
	return (0);
}
