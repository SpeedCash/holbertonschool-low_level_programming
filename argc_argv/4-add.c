#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 * Return: 0 if successful, 1 if there's an error.
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int num;
	int i;
	int j;

	if (argc == 1)
	{
	printf("0\n");
	return (0);
	}

	for (i = 1; i < argc; i++)
	{
	char *arg = argv[i];
	j = 0;

	while (arg[j] != '\0')
	{
		if (arg[j] < '0' || arg[j] > '9')
		{
		printf("Error\n");
		return (1);
		}
	j++;
	}

	num = atoi(arg);
	if (num < 0)
	{
		printf("Error\n");
		return (1);
	}

	sum += num;
	}

	printf("%d\n", sum);

	return (0);
}
