#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
	char *mem = malloc(10 * 1024 * sizeof(char));
	*(mem + 0) = 's';
	*(mem + 1) = 'i';
	*(mem + 2) = 'g';
	*(mem + 3) = 'i';
	*(mem + 4) = 'l';

	unsigned int leftover = sleep(10);

	free(mem);

	return 0;
}
