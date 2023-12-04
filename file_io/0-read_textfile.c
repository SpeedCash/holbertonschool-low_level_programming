#include "main.h"
#include <unistd.h>
#include <fcntl.h>

/**
 * read_textfile - Lit un fichier texte et l'imprime sur la sortie standard
 * @filename: le nom du fichier à lire
 * @letters: le nombre de lettres à lire et imprimer
 *
 * Return: le nombre réel de lettres lues et imprimées, ou 0 en cas d'échec
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nread, nwritten, total_written = 0;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	while ((nread = read(fd, buffer, letters)) > 0)
	{
		nwritten = write(STDOUT_FILENO, buffer, nread);
		if (nwritten != nread)
		{
			free(buffer);
			close(fd);
			return (0);
		}
		total_written += nwritten;
	}

	free(buffer);
	close(fd);

	if (nread == -1)
		return (0);

	return (total_written);
}
