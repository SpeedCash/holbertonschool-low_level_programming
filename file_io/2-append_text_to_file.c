#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int status;
	int length = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (!text_content)
	{
		close(fd);
		return (1);
	}

	while (text_content[length])
		length++;

	status = write(fd, text_content, length);

	close(fd);

	return (status == -1 ? -1 : 1);
}
