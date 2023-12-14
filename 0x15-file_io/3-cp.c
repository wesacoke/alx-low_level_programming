#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>

void close_file(int fd, const char *filename);

int main(int argc, char *argv[]) {
	int from, to, r, w;
	char buffer[1024];

	if (argc != 3) {
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}

	from = open(argv[1], O_RDONLY);
	if (from == -1) {
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (to == -1) {
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close_file(from, argv[1]);
		exit(99);
	}

	do {
		r = read(from, buffer, 1024);
		if (r == -1) {
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			close_file(from, argv[1]);
			close_file(to, argv[2]);
			exit(98);
		}

		w = write(to, buffer, r);
		if (w == -1) {
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close_file(from, argv[1]);
			close_file(to, argv[2]);
			exit(99);
		}

	} while (r > 0);

	close_file(from, argv[1]);
	close_file(to, argv[2]);

	return 0;
}

void close_file(int fd, const char *filename) {
	int c;

	c = close(fd);
	if (c == -1) {
		dprintf(STDERR_FILENO, "Error: Can't close fd %d for file %s\n", fd, filename);
		exit(100);
	}
}
