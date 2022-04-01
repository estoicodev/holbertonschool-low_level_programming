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
	if (fdfrom == -1)
		return (98);

	fdto = open(fileto, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fdto == -1)
		return (99);

	rd = read(fdfrom, buf, 1024);
	if (rd == -1)
		return (98);

	while (rd > 0)
	{
		rd_next = write(fdto, buf, rd);
		if (rd_next == -1)
			return (99);

		rd = read(fdfrom, buf, 1024);
		if (rd == -1)
			return (98);
	}

	cs = close(fdfrom);
	if (cs == -1)
		return (fdfrom);

	cs = close(fdto);
	if (cs == -1)
		return (fdto);

	return (42);
}

/**
 * main - desc
 * @argc: ...
 * @argv: ...
 *
 * Return: ...
 */
int main(int argc, char **argv)
{
	int res;

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	res = cp_text_file_into_file(argv[1], argv[2]);

	if (res == 98)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	else if (res == 99)
	{
		dprintf(2, "Error: Can't write to file %s\n", argv[2]);
		exit(99);
	}
	else if (res != 42)
	{
		dprintf(2, "Error: Can't close fd %d\n", res);
		exit(100);
	}

	return (0);
}
