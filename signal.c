#include <stdlib.h>/*exit(1);*/
#include <stdio.h>
#include <signal.h>
/*#define SIGINT 2*/


//void (* signal(int sig, void (* func)(int)))(int)

void sighandler(int signum) {

	printf("signal %d\n", signum);

	exit(0);

}




int main() {

	signal(SIGINT, sighandler);

	while (1) {

		printf("while (1) { }\n");

	}

}
