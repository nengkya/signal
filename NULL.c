#include <stdlib.h>
#include <signal.h>
#include <stdio.h>


void sighandler() {

	printf("failed.\n");
	exit(0);

}


int main() {

	char * c = 0;

	signal(SIGSEGV, sighandler);

	printf("%c", * c);

}
