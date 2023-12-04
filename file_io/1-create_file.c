#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

/**
 * create_file - Creates a file.
 * @filename: Name of the file to create.
 * @text_content: NULL terminated string to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;

	/* Check for NULL filename */
	if (!filename)
		return (-1);

	/* Open file with specified permissions */
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd < 0)
		return (-1);

	/* Write content if not NULL */
	if (text_content)
	{
		if (write(fd, text_content, strlen(text_content)) < 0)
		{
			close(fd);
			return (-1);
		}
	}

	/* Close file */
	close(fd);
	return (1);
}
