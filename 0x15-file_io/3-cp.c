#include "main.h"

/**
 * cp_text_file_into_file - desc
 * @filefrom: ...
 * @fileto: ...
 *
 * Return: ...
 */
int cp_text_file_into_file(const char *filefrom, const char *fileto)
{
	int fdfrom, fdto, cs, rd, rd_next;
	char *buf[1024];

	fdfrom = open(filefrom, O_RDONLY);
	if (fdfrom < 0)
		return (98);

	fdto = open(fileto, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fdto < 0)
		return (99);

	rd = read(fdfrom, buf, 1024);
	if (rd < 0)
		return (98);

	while (rd > 0)
	{
		rd_next = write(fdto, buf, rd);
		if (rd_next < 0)
			return (99);

		rd = read(fdfrom, buf, 1024);
		if (rd < 0)
			return (98);
	}

	cs = close(fdfrom);
	if (cs < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", cs);
		return (100);
	}
	cs = close(fdto);
	if (cs < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", cs);
		return (100);
	}

	return (0);
}

/**
 * main - desc
 * @argc: ...
 * @av: ...
 *
 * Return: ...
 */
int main(int argc, char **av)
{
	int res;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	res = cp_text_file_into_file(av[1], av[2]);

	if (res == 98)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	else if (res == 99)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", av[2]);
		exit(99);
	}
	else if (res == 100)
		exit(100);

	return (0);
}
