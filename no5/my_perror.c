#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
extern int errno;

void my_perror(char *string, char *errmsg){
	
	printf("%s : %s\n", string, errmsg);
}


void main(int argc, char *argv[]){

	FILE *f;

	char string[] = "error message";

	if (argc < 2){
		printf("Usage : my_perror nofilename\n");
		exit(1);
	}

	if((f = fopen(argv[1], "r")) == NULL){
		printf("Cannot open a file. \"%s\"\n", argv[1]);
		my_perror("error message", strerror(errno));
		exit(1);
	}

	printf("Open a file \"%s\".\n", argv[1]);

	fclose(f);
}
