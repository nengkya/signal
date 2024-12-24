#include <stdlib.h>
#include <signal.h>
#include <stdio.h>


void sighandler() {

	printf("out of boundary...\n");
	exit(0);

}


int main() {

	char * c = "HaGa";

	signal(SIGSEGV, sighandler);

	c[11] = 'z';

}
