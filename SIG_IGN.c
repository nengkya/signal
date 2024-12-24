#include <signal.h>
#include <stdio.h>


void handle_sigint(int signum) {

	printf("ctrl-c pressed...");

}


int main() {

	signal(SIGINT, SIG_IGN);

	while (1) {

		printf("ctrl-c ignored...\n");

	}

}
