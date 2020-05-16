#include <unistd.h>

int main() {
	char *shell[1];
	shell[0] = "/bin/sh";
	execve(shell[0], shell, NULL);
}